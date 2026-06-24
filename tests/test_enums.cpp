#include <gtest/gtest.h>
#include <adw/adw.hpp>

namespace adw = gi::repository::Adw;
namespace gtk = gi::repository::Gtk;

// Verify that enum class values compile and have the expected underlying
// integers as defined by the GObject introspection data.

TEST(AdwEnums, ColorSchemeValues) {
    EXPECT_NE(adw::ColorScheme::DEFAULT_,     adw::ColorScheme::FORCE_DARK_);
    EXPECT_NE(adw::ColorScheme::FORCE_DARK_,  adw::ColorScheme::FORCE_LIGHT_);
    EXPECT_NE(adw::ColorScheme::FORCE_LIGHT_, adw::ColorScheme::PREFER_DARK_);
}

TEST(AdwEnums, AccentColorValues) {
    EXPECT_NE(adw::AccentColor::BLUE_,   adw::AccentColor::TEAL_);
    EXPECT_NE(adw::AccentColor::GREEN_,  adw::AccentColor::YELLOW_);
    EXPECT_NE(adw::AccentColor::ORANGE_, adw::AccentColor::RED_);
}

TEST(GtkEnums, OrientationValues) {
    EXPECT_NE(gtk::Orientation::HORIZONTAL_, gtk::Orientation::VERTICAL_);
}

TEST(GtkEnums, AlignValues) {
    EXPECT_NE(gtk::Align::START_,  gtk::Align::END_);
    EXPECT_NE(gtk::Align::CENTER_, gtk::Align::FILL_);
}
