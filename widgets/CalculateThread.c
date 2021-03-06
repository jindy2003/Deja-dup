/* CalculateThread.c generated by valac 0.16.1, the Vala compiler
 * generated from CalculateThread.vala, do not modify */

/* -*- Mode: Vala; indent-tabs-mode: nil; tab-width: 2 -*- */

#include <glib.h>
#include <glib-object.h>
#include <stdio.h>


#define DEJA_DUP_TYPE_CALCULATE_THREAD (deja_dup_calculate_thread_get_type ())
#define DEJA_DUP_CALCULATE_THREAD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DEJA_DUP_TYPE_CALCULATE_THREAD, DejaDupCalculateThread))
#define DEJA_DUP_CALCULATE_THREAD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DEJA_DUP_TYPE_CALCULATE_THREAD, DejaDupCalculateThreadClass))
#define DEJA_DUP_IS_CALCULATE_THREAD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DEJA_DUP_TYPE_CALCULATE_THREAD))
#define DEJA_DUP_IS_CALCULATE_THREAD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DEJA_DUP_TYPE_CALCULATE_THREAD))
#define DEJA_DUP_CALCULATE_THREAD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DEJA_DUP_TYPE_CALCULATE_THREAD, DejaDupCalculateThreadClass))

typedef struct _DejaDupCalculateThread DejaDupCalculateThread;
typedef struct _DejaDupCalculateThreadClass DejaDupCalculateThreadClass;
typedef struct _DejaDupCalculateThreadPrivate DejaDupCalculateThreadPrivate;

struct _DejaDupCalculateThread {
	GObject parent_instance;
	DejaDupCalculateThreadPrivate * priv;
};

struct _DejaDupCalculateThreadClass {
	GObjectClass parent_class;
};

struct _DejaDupCalculateThreadPrivate {
	GThreadPriority _priority;
	gint _x_times;
};


static gpointer deja_dup_calculate_thread_parent_class = NULL;

GType deja_dup_calculate_thread_get_type (void) G_GNUC_CONST;
#define DEJA_DUP_CALCULATE_THREAD_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DEJA_DUP_TYPE_CALCULATE_THREAD, DejaDupCalculateThreadPrivate))
enum  {
	DEJA_DUP_CALCULATE_THREAD_DUMMY_PROPERTY,
	DEJA_DUP_CALCULATE_THREAD_PRIORITY,
	DEJA_DUP_CALCULATE_THREAD_X_TIMES
};
DejaDupCalculateThread* deja_dup_calculate_thread_new (gint times, GThreadPriority priority);
DejaDupCalculateThread* deja_dup_calculate_thread_construct (GType object_type, gint times, GThreadPriority priority);
static void deja_dup_calculate_thread_set_priority (DejaDupCalculateThread* self, GThreadPriority value);
static void deja_dup_calculate_thread_set_x_times (DejaDupCalculateThread* self, gint value);
gint deja_dup_calculate_thread_run (DejaDupCalculateThread* self);
gint deja_dup_calculate_thread_get_x_times (DejaDupCalculateThread* self);
GThreadPriority deja_dup_calculate_thread_get_priority (DejaDupCalculateThread* self);
static void deja_dup_calculate_thread_finalize (GObject* obj);
static void _vala_deja_dup_calculate_thread_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_deja_dup_calculate_thread_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


DejaDupCalculateThread* deja_dup_calculate_thread_construct (GType object_type, gint times, GThreadPriority priority) {
	DejaDupCalculateThread * self = NULL;
	GThreadPriority _tmp0_;
	gint _tmp1_;
	self = (DejaDupCalculateThread*) g_object_new (object_type, NULL);
	_tmp0_ = priority;
	deja_dup_calculate_thread_set_priority (self, _tmp0_);
	_tmp1_ = times;
	deja_dup_calculate_thread_set_x_times (self, _tmp1_);
	return self;
}


DejaDupCalculateThread* deja_dup_calculate_thread_new (gint times, GThreadPriority priority) {
	return deja_dup_calculate_thread_construct (DEJA_DUP_TYPE_CALCULATE_THREAD, times, priority);
}


gint deja_dup_calculate_thread_run (DejaDupCalculateThread* self) {
	gint result = 0;
	GThread* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = g_thread_self ();
	g_thread_set_priority (_tmp0_, G_THREAD_PRIORITY_URGENT);
	{
		gint i;
		i = 0;
		{
			gboolean _tmp1_;
			_tmp1_ = TRUE;
			while (TRUE) {
				gboolean _tmp2_;
				gint _tmp4_;
				gint _tmp5_;
				FILE* _tmp6_;
				gint _tmp7_;
				gint _tmp8_;
				_tmp2_ = _tmp1_;
				if (!_tmp2_) {
					gint _tmp3_;
					_tmp3_ = i;
					i = _tmp3_ + 1;
				}
				_tmp1_ = FALSE;
				_tmp4_ = i;
				_tmp5_ = self->priv->_x_times;
				if (!(_tmp4_ < _tmp5_)) {
					break;
				}
				_tmp6_ = stdout;
				_tmp7_ = i;
				_tmp8_ = self->priv->_x_times;
				fprintf (_tmp6_, "ping! %d/%d\n", _tmp7_ + 1, _tmp8_);
				g_usleep ((gulong) 10000);
			}
		}
	}
	g_thread_exit (42);
	result = 43;
	return result;
}


GThreadPriority deja_dup_calculate_thread_get_priority (DejaDupCalculateThread* self) {
	GThreadPriority result;
	GThreadPriority _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_priority;
	result = _tmp0_;
	return result;
}


static void deja_dup_calculate_thread_set_priority (DejaDupCalculateThread* self, GThreadPriority value) {
	GThreadPriority _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_priority = _tmp0_;
	g_object_notify ((GObject *) self, "priority");
}


gint deja_dup_calculate_thread_get_x_times (DejaDupCalculateThread* self) {
	gint result;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_x_times;
	result = _tmp0_;
	return result;
}


static void deja_dup_calculate_thread_set_x_times (DejaDupCalculateThread* self, gint value) {
	gint _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_x_times = _tmp0_;
	g_object_notify ((GObject *) self, "x-times");
}


static void deja_dup_calculate_thread_class_init (DejaDupCalculateThreadClass * klass) {
	deja_dup_calculate_thread_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (DejaDupCalculateThreadPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_deja_dup_calculate_thread_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_deja_dup_calculate_thread_set_property;
	G_OBJECT_CLASS (klass)->finalize = deja_dup_calculate_thread_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), DEJA_DUP_CALCULATE_THREAD_PRIORITY, g_param_spec_int ("priority", "priority", "priority", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), DEJA_DUP_CALCULATE_THREAD_X_TIMES, g_param_spec_int ("x-times", "x-times", "x-times", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void deja_dup_calculate_thread_instance_init (DejaDupCalculateThread * self) {
	self->priv = DEJA_DUP_CALCULATE_THREAD_GET_PRIVATE (self);
}


static void deja_dup_calculate_thread_finalize (GObject* obj) {
	DejaDupCalculateThread * self;
	self = DEJA_DUP_CALCULATE_THREAD (obj);
	G_OBJECT_CLASS (deja_dup_calculate_thread_parent_class)->finalize (obj);
}


GType deja_dup_calculate_thread_get_type (void) {
	static volatile gsize deja_dup_calculate_thread_type_id__volatile = 0;
	if (g_once_init_enter (&deja_dup_calculate_thread_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DejaDupCalculateThreadClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) deja_dup_calculate_thread_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DejaDupCalculateThread), 0, (GInstanceInitFunc) deja_dup_calculate_thread_instance_init, NULL };
		GType deja_dup_calculate_thread_type_id;
		deja_dup_calculate_thread_type_id = g_type_register_static (G_TYPE_OBJECT, "DejaDupCalculateThread", &g_define_type_info, 0);
		g_once_init_leave (&deja_dup_calculate_thread_type_id__volatile, deja_dup_calculate_thread_type_id);
	}
	return deja_dup_calculate_thread_type_id__volatile;
}


static void _vala_deja_dup_calculate_thread_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	DejaDupCalculateThread * self;
	self = DEJA_DUP_CALCULATE_THREAD (object);
	switch (property_id) {
		case DEJA_DUP_CALCULATE_THREAD_PRIORITY:
		g_value_set_int (value, deja_dup_calculate_thread_get_priority (self));
		break;
		case DEJA_DUP_CALCULATE_THREAD_X_TIMES:
		g_value_set_int (value, deja_dup_calculate_thread_get_x_times (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_deja_dup_calculate_thread_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	DejaDupCalculateThread * self;
	self = DEJA_DUP_CALCULATE_THREAD (object);
	switch (property_id) {
		case DEJA_DUP_CALCULATE_THREAD_PRIORITY:
		deja_dup_calculate_thread_set_priority (self, g_value_get_int (value));
		break;
		case DEJA_DUP_CALCULATE_THREAD_X_TIMES:
		deja_dup_calculate_thread_set_x_times (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



