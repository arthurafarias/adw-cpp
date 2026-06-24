#include <gtest/gtest.h>
#include <adw/adw.hpp>
#include <gtk/gtk.hpp>

// NOTE: Constructing GTK/ADW objects requires a running GLib main loop and,
// for widgets, an initialised display. These tests use gtk_init() so they can
// run in a headless CI environment (set GDK_BACKEND=offscreen or use Xvfb).

namespace adw = gi::repository::Adw;
namespace gtk = gi::repository::Gtk;

class AdwConstruction : public ::testing::Test {
protected:
    static void SetUpTestSuite() {
        gtk_init();
    }
};

// ── ActionRow ──────────────────────────────────────────────────────────────

TEST_F(AdwConstruction, ActionRowNew) {
    auto row = adw::ActionRow::new_();
    EXPECT_TRUE(row);
}

TEST_F(AdwConstruction, ActionRowTitle) {
    auto row = adw::ActionRow::new_();
    row.set_title("Test title");
    EXPECT_EQ(std::string(row.get_title()), "Test title");
}

TEST_F(AdwConstruction, ActionRowSubtitle) {
    auto row = adw::ActionRow::new_();
    row.set_subtitle("Sub");
    EXPECT_EQ(std::string(row.get_subtitle()), "Sub");
}

// ── SwitchRow ─────────────────────────────────────────────────────────────

TEST_F(AdwConstruction, SwitchRowDefaultInactive) {
    auto row = adw::SwitchRow::new_();
    EXPECT_FALSE(row.get_active());
}

TEST_F(AdwConstruction, SwitchRowToggle) {
    auto row = adw::SwitchRow::new_();
    row.set_active(true);
    EXPECT_TRUE(row.get_active());
    row.set_active(false);
    EXPECT_FALSE(row.get_active());
}

// ── HeaderBar ─────────────────────────────────────────────────────────────

TEST_F(AdwConstruction, HeaderBarNew) {
    auto bar = adw::HeaderBar::new_();
    EXPECT_TRUE(bar);
}

// ── ToolbarView ───────────────────────────────────────────────────────────

TEST_F(AdwConstruction, ToolbarViewNew) {
    auto view = adw::ToolbarView::new_();
    EXPECT_TRUE(view);
}

// ── GTK Label ─────────────────────────────────────────────────────────────

TEST_F(AdwConstruction, LabelText) {
    auto lbl = gtk::Label::new_("hello");
    EXPECT_EQ(std::string(lbl.get_label()), "hello");
    lbl.set_label("world");
    EXPECT_EQ(std::string(lbl.get_label()), "world");
}

// ── GTK Box ───────────────────────────────────────────────────────────────

TEST_F(AdwConstruction, BoxNew) {
    auto box = gtk::Box::new_(gtk::Orientation::VERTICAL_, 8);
    EXPECT_TRUE(box);
    EXPECT_EQ(box.get_orientation(), gtk::Orientation::VERTICAL_);
    EXPECT_EQ(box.get_spacing(), 8);
}
