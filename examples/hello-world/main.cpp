#define GI_INLINE 1
#include <adw/adw.hpp>

using namespace gi::repository;

static void on_activate(Gtk::Application app) {
  auto window = Adw::ApplicationWindow::new_(app);

  window.set_default_size(480, 360);

  auto toolbar_view = Adw::ToolbarView::new_();
  auto header = Adw::HeaderBar::new_();
  toolbar_view.add_top_bar(header);

  auto status = Adw::StatusPage::new_();
  status.set_icon_name("dialog-information-symbolic");
  status.set_title("Hello, Adwaita!");
  status.set_description(
      "A minimal C++23 application using gi-repository-adw bindings.");

  auto button = Gtk::Button::new_with_label("Click me");
  button.set_halign(Gtk::Align::CENTER_);
  button.add_css_class("pill");
  button.add_css_class("suggested-action");

  auto toast = Adw::Toast::new_("Button clicked!");
  auto overlay = Adw::ToastOverlay::new_();

  button.signal_clicked().connect(
      [toast, overlay](auto) mutable { overlay.add_toast(toast); });

  auto box = Gtk::Box::new_(Gtk::Orientation::VERTICAL_, 12);
  box.set_valign(Gtk::Align::CENTER_);
  box.append(status);
  box.append(button);

  overlay.set_child(box);
  toolbar_view.set_content(overlay);
  window.set_content(toolbar_view);
  window.present();
}

int main(int argc, char *argv[]) {
  auto app = Adw::Application::new_("org.example.HelloWorld", {});
  app.signal_activate().connect([app](auto) mutable { on_activate(app); });
  return app.run(nullptr);
}
