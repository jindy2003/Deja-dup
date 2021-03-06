/* libwidgets.vapi generated by valac-0.16 0.16.1, do not modify. */

namespace DejaDup {
	[CCode (cheader_filename = "widgets.h")]
	public class CalculateThread : GLib.Object {
		public CalculateThread (int times, GLib.ThreadPriority priority);
		public int run ();
		public GLib.ThreadPriority priority { get; private set; }
		public int x_times { get; private set; }
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigApp : DejaDup.ConfigWidget, DejaDup.Togglable {
		protected Gtk.Switch button;
		protected Gtk.HBox hbox;
		protected Gtk.Image icon;
		protected Gtk.Label label;
		protected int size;
		protected bool user_driven;
		protected Gtk.VBox vbox;
		protected Gtk.VBox vbox2;
		public ConfigApp (string key);
		protected virtual void fill_box ();
		protected virtual void handle_toggled ();
		protected void restore_gsettings ();
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigAppDoc : DejaDup.ConfigWidget {
		protected Gtk.EventBox event_box;
		protected Gtk.HBox hbox;
		protected Gtk.Image icon;
		protected Gtk.Label label;
		protected Gtk.Arrow next;
		protected Gtk.Label status;
		protected bool user_driven;
		public ConfigAppDoc ();
		protected virtual void fill_box ();
		protected void on_doc_toggled (bool sensitivity);
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigAppList : DejaDup.ConfigWidget {
		public ConfigAppList ();
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigAppPhoto : DejaDup.ConfigWidget {
		protected Gtk.EventBox event_box;
		protected Gtk.HBox hbox;
		protected Gtk.Image icon;
		protected Gtk.Label label;
		protected Gtk.Arrow next;
		protected Gtk.Label status;
		public ConfigAppPhoto ();
		protected virtual void fill_box ();
		protected void on_photo_toggled (bool sensitivity);
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigBool : DejaDup.ConfigWidget, DejaDup.Togglable {
		protected Gtk.CheckButton button;
		protected bool user_driven;
		public ConfigBool (string key, string label, string ns = "");
		protected virtual void handle_toggled ();
		protected override async void set_from_config ();
		public string label { get; construct; }
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigChoice : DejaDup.ConfigWidget {
		protected Gtk.ComboBox combo;
		protected string default_val;
		protected int settings_col;
		public ConfigChoice ();
		public GLib.Value? get_current_value ();
		protected virtual void handle_changed ();
		public void init (Gtk.TreeModel model, int settings_col);
		protected override async void set_from_config ();
		public signal void choice_changed (string val);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigDelete : DejaDup.ConfigChoice {
		public static int FOREVER;
		public const int ANNUALLY;
		public const int SEMIANNUALLY;
		public ConfigDelete (string key, string ns = "");
		protected override void handle_changed ();
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigDocDialog : Gtk.Dialog {
		public ConfigDocDialog ();
		public signal void doc_toggled (bool sensitivity);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigEntry : DejaDup.ConfigWidget {
		protected Gtk.Entry entry;
		public ConfigEntry (string key, string ns = "");
		public string get_text ();
		public void set_accessible_name (string name);
		protected override async void set_from_config ();
		public virtual void write_to_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigFolder : DejaDup.ConfigEntry {
		public ConfigFolder (string key, string ns = "");
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLabel : DejaDup.ConfigWidget {
		protected Gtk.Grid box;
		protected Gtk.Label label;
		public ConfigLabel (string? key, string ns = "");
		protected virtual void fill_box ();
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLabelBackupDate : DejaDup.ConfigLabel {
		public enum Kind {
			LAST,
			NEXT
		}
		public ConfigLabelBackupDate (DejaDup.ConfigLabelBackupDate.Kind kind);
		protected override async void set_from_config ();
		protected void set_from_config_last ();
		protected void set_from_config_next ();
		public DejaDup.ConfigLabelBackupDate.Kind kind { get; construct; }
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLabelBool : DejaDup.ConfigLabel {
		public ConfigLabelBool (string key, string ns = "");
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLabelList : DejaDup.ConfigLabel {
		public ConfigLabelList (string key, string ns = "");
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLabelLocation : DejaDup.ConfigLabel {
		public ConfigLabelLocation ();
		protected override void fill_box ();
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLabelPolicy : DejaDup.ConfigLabel {
		public ConfigLabelPolicy ();
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigList : DejaDup.ConfigWidget {
		public ConfigList (string key, string ns = "");
		public bool add_files (GLib.SList<string>? files);
		public string[] get_files ();
		protected override async void set_from_config ();
		public void write_to_config (Gtk.TreeModel model, Gtk.TreePath? path);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLocation : DejaDup.ConfigWidget {
		public ConfigLocation (Gtk.SizeGroup? sg = null);
		public Gtk.Requisition hidden_size ();
		protected override async void set_from_config ();
		public Gtk.EventBox extras { get; private set; }
		public Gtk.SizeGroup label_sizes { get; construct; }
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLocationCustom : DejaDup.ConfigLocationTable {
		public ConfigLocationCustom (Gtk.SizeGroup sg);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLocationDAV : DejaDup.ConfigLocationTable {
		public ConfigLocationDAV (Gtk.SizeGroup sg);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLocationFTP : DejaDup.ConfigLocationTable {
		public ConfigLocationFTP (Gtk.SizeGroup sg);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLocationFile : DejaDup.ConfigLocationTable {
		public ConfigLocationFile (Gtk.SizeGroup sg);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLocationRackspace : DejaDup.ConfigLocationTable {
		public ConfigLocationRackspace (Gtk.SizeGroup sg);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLocationS3 : DejaDup.ConfigLocationTable {
		public ConfigLocationS3 (Gtk.SizeGroup sg);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLocationSMB : DejaDup.ConfigLocationTable {
		public ConfigLocationSMB (Gtk.SizeGroup sg);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLocationSSH : DejaDup.ConfigLocationTable {
		public ConfigLocationSSH (Gtk.SizeGroup sg);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLocationTable : Gtk.Grid {
		protected int row;
		public ConfigLocationTable (Gtk.SizeGroup sg);
		protected void add_wide_widget (Gtk.Widget w, DejaDup.Togglable? check = null);
		protected void add_widget (string msg, Gtk.Widget w, DejaDup.Togglable? check = null, Gtk.Widget? mnemonic = null);
		protected void add_widget_with_label (Gtk.Widget label, Gtk.Widget w, DejaDup.Togglable? check = null);
		public Gtk.SizeGroup label_sizes { get; construct; }
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLocationU1 : DejaDup.ConfigLocationTable {
		public ConfigLocationU1 (Gtk.SizeGroup sg);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigLocationVolume : DejaDup.ConfigLocationTable {
		public ConfigLocationVolume (Gtk.SizeGroup sg);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigNumber : DejaDup.ConfigWidget {
		public ConfigNumber (string key, int lower_bound, int upper_bound, string ns = "");
		protected override async void set_from_config ();
		public int lower_bound { get; construct; }
		public int upper_bound { get; construct; }
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigPeriod : DejaDup.ConfigChoice {
		public ConfigPeriod (string key, string ns = "");
		protected override void handle_changed ();
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigPhotoDialog : Gtk.Dialog {
		public ConfigPhotoDialog ();
		public signal void photo_toggled (bool sensitivity);
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigRelPath : DejaDup.ConfigEntry {
		public ConfigRelPath (string key, string ns = "");
		protected override async void set_from_config ();
		public override void write_to_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigSwitch : DejaDup.ConfigWidget, DejaDup.Togglable {
		protected Gtk.Switch button;
		protected bool user_driven;
		public ConfigSwitch (string key, string ns = "");
		protected virtual void handle_toggled ();
		protected override async void set_from_config ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigURLPart : DejaDup.ConfigEntry {
		public enum Part {
			SCHEME,
			SERVER,
			PORT,
			USER,
			FOLDER,
			DOMAIN
		}
		public ConfigURLPart (DejaDup.ConfigURLPart.Part part, string key, string ns = "");
		public static string read_uri_part (DejaDup.SimpleSettings settings, string key, DejaDup.ConfigURLPart.Part part);
		protected override async void set_from_config ();
		public override void write_to_config ();
		public static void write_uri_part (DejaDup.SimpleSettings settings, string key, DejaDup.ConfigURLPart.Part part, string userval);
		public DejaDup.ConfigURLPart.Part part { get; construct; }
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ConfigURLPartBool : DejaDup.ConfigBool {
		public delegate bool TestActive (string val);
		public ConfigURLPartBool (DejaDup.ConfigURLPart.Part part, string key, string ns, string label);
		protected override void handle_toggled ();
		protected override async void set_from_config ();
		public DejaDup.ConfigURLPart.Part part { get; construct; }
		public DejaDup.ConfigURLPartBool.TestActive test_active { get; set; }
	}
	[CCode (cheader_filename = "widgets.h")]
	public abstract class ConfigWidget : Gtk.EventBox {
		protected GLib.List<DejaDup.SimpleSettings> all_settings;
		protected DejaDup.SimpleSettings settings;
		protected bool syncing;
		public ConfigWidget ();
		protected abstract async void set_from_config ();
		protected void watch_key (string? key, DejaDup.SimpleSettings? s = null);
		public string key { get; construct; }
		public Gtk.Widget mnemonic_widget { get; protected set; }
		public string ns { get; construct; }
		public signal void changed ();
	}
	[CCode (cheader_filename = "widgets.h")]
	public class ToggleGroup : GLib.Object {
		public ToggleGroup (DejaDup.Togglable toggle);
		public void add_dependent (Gtk.Widget w);
		public void check ();
		public ToggleGroup.with_button (Gtk.ToggleButton toggle_button);
		public DejaDup.Togglable toggle { get; construct; }
		public Gtk.ToggleButton toggle_button { get; construct; }
	}
	[CCode (cheader_filename = "widgets.h")]
	public interface Togglable : GLib.Object {
		public abstract bool get_active ();
		public signal void toggled (DejaDup.Togglable t, bool user);
	}
	[CCode (cheader_filename = "widgets.h")]
	public enum ShellEnv {
		NONE,
		GNOME,
		UNITY,
		LEGACY
	}
	[CCode (cheader_filename = "widgets.h")]
	protected static DejaDup.ShellEnv shell;
	[CCode (cheader_filename = "widgets.h")]
	public static void destroy_widget (Gtk.Widget w);
	[CCode (cheader_filename = "widgets.h")]
	public static DejaDup.ShellEnv get_shell ();
	[CCode (cheader_filename = "widgets.h")]
	public static bool gui_initialize (Gtk.Window? parent, bool show_error = true);
	[CCode (cheader_filename = "widgets.h")]
	public static void hide_background_window_for_shell (Gtk.Window win);
	[CCode (cheader_filename = "widgets.h")]
	public static void show_background_window_for_shell (Gtk.Window win);
	[CCode (cheader_filename = "widgets.h")]
	public static void show_uri (Gtk.Window parent, string link);
}
