// !!! This is a generated file, do not edit !!!
#ifndef _PXZ_SCENE_INTERFACE_SCENETYPES_C_H_
#define _PXZ_SCENE_INTERFACE_SCENETYPES_C_H_

#include <string.h>
#include <PiXYZCore/interface/InterfaceBase_c.h>
#include <PiXYZCAD/interface/CADTypes_c.h>
#include <PiXYZCore/interface/CoreTypes_c.h>
#include <PiXYZGeom/interface/GeomTypes_c.h>
#include <PiXYZMaterial/interface/MaterialTypes_c.h>
#include <PiXYZPolygonal/interface/PolygonalTypes_c.h>


typedef Core_Entity Scene_AlternativeTree;

typedef struct {
   size_t size;
   Scene_AlternativeTree * list;
} Scene_AlternativeTreeList;

PXZ_EXPORTED void Scene_AlternativeTreeList_init(Scene_AlternativeTreeList * list, size_t size = 0);
PXZ_EXPORTED void Scene_AlternativeTreeList_free(Scene_AlternativeTreeList * list);
typedef Core_Entity Scene_AnimChannel;

typedef struct {
   size_t size;
   Scene_AnimChannel * list;
} Scene_AnimChannelList;

PXZ_EXPORTED void Scene_AnimChannelList_init(Scene_AnimChannelList * list, size_t size = 0);
PXZ_EXPORTED void Scene_AnimChannelList_free(Scene_AnimChannelList * list);
typedef Core_Entity Scene_Animation;

typedef struct {
   size_t size;
   Scene_Animation * list;
} Scene_AnimationList;

PXZ_EXPORTED void Scene_AnimationList_init(Scene_AnimationList * list, size_t size = 0);
PXZ_EXPORTED void Scene_AnimationList_free(Scene_AnimationList * list);
typedef Core_Long Scene_AnimationTime;

typedef Core_Entity Scene_Annotation;

typedef Core_Entity Scene_AnnotationGroup;

typedef struct {
   size_t size;
   Scene_AnnotationGroup * list;
} Scene_AnnotationGroupList;

PXZ_EXPORTED void Scene_AnnotationGroupList_init(Scene_AnnotationGroupList * list, size_t size = 0);
PXZ_EXPORTED void Scene_AnnotationGroupList_free(Scene_AnnotationGroupList * list);
typedef struct {
   size_t size;
   Scene_Annotation * list;
} Scene_AnnotationList;

PXZ_EXPORTED void Scene_AnnotationList_init(Scene_AnnotationList * list, size_t size = 0);
PXZ_EXPORTED void Scene_AnnotationList_free(Scene_AnnotationList * list);
typedef Geom_GeomEntity Scene_Shape;

typedef Scene_Shape Scene_BRepShape;

typedef struct {
   Geom_Point3 position;
   Geom_Vector3 direction;
   Geom_Vector3 up;
   Core_Double fov;
} Scene_Camera;

PXZ_EXPORTED void Scene_Camera_init(Scene_Camera * str);
PXZ_EXPORTED void Scene_Camera_free(Scene_Camera * str);
typedef Core_Entity Scene_Component;

typedef struct {
   size_t size;
   Scene_Component * list;
} Scene_ComponentList;

PXZ_EXPORTED void Scene_ComponentList_init(Scene_ComponentList * list, size_t size = 0);
PXZ_EXPORTED void Scene_ComponentList_free(Scene_ComponentList * list);
typedef enum {
 Scene_ComponentType_Part = 0,
 Scene_ComponentType_PMI = 1,
 Scene_ComponentType_Light = 2,
 Scene_ComponentType_VisualBehavior = 3,
 Scene_ComponentType_InteractionBehavior = 4,
 Scene_ComponentType_Metadata = 5,
 Scene_ComponentType_Variant = 6,
 Scene_ComponentType_Animation = 7,
 Scene_ComponentType_Joint = 8,
 Scene_ComponentType_Widget = 9,
 Scene_ComponentType_OoCComponent = 10,
 Scene_ComponentType_LODComponent = 11,
 Scene_ComponentType_ExternalDataComponent = 12,
} Scene_ComponentType;

typedef Core_Entity Scene_DirectionalLight;

typedef Scene_Component Scene_ExternalDataComponent;

typedef Core_String Scene_FilterExpression;

typedef struct {
   Core_Ident id;
   Core_String name;
   Scene_FilterExpression expr;
} Scene_Filter;

PXZ_EXPORTED void Scene_Filter_init(Scene_Filter * str);
PXZ_EXPORTED void Scene_Filter_free(Scene_Filter * str);
typedef struct {
   size_t size;
   Scene_Filter * list;
} Scene_FilterList;

PXZ_EXPORTED void Scene_FilterList_init(Scene_FilterList * list, size_t size = 0);
PXZ_EXPORTED void Scene_FilterList_free(Scene_FilterList * list);
typedef Scene_Component Scene_JointComponent;

typedef Core_Entity Scene_Keyframe;

typedef struct {
   size_t size;
   Scene_Keyframe * list;
} Scene_KeyframeList;

PXZ_EXPORTED void Scene_KeyframeList_init(Scene_KeyframeList * list, size_t size = 0);
PXZ_EXPORTED void Scene_KeyframeList_free(Scene_KeyframeList * list);
typedef Core_Entity Scene_LOD;

typedef Scene_Component Scene_LODComponent;

typedef struct {
   size_t size;
   Scene_LODComponent * list;
} Scene_LODComponentList;

PXZ_EXPORTED void Scene_LODComponentList_init(Scene_LODComponentList * list, size_t size = 0);
PXZ_EXPORTED void Scene_LODComponentList_free(Scene_LODComponentList * list);
typedef struct {
   size_t size;
   Scene_LOD * list;
} Scene_LODList;

PXZ_EXPORTED void Scene_LODList_init(Scene_LODList * list, size_t size = 0);
PXZ_EXPORTED void Scene_LODList_free(Scene_LODList * list);
typedef Core_Entity Scene_Light;

typedef Scene_Component Scene_LightComponent;

struct Scene_MergeByRegionsStrategy {
   Core_Int NumberOfRegions;
   Geom_Distance SizeOfRegions;
   typedef enum {
      UNKNOWN=0,
      NUMBEROFREGIONS,
      SIZEOFREGIONS
   } Type;

   Type _type; 
};

PXZ_EXPORTED void Scene_MergeByRegionsStrategy_init(Scene_MergeByRegionsStrategy * sel);
PXZ_EXPORTED void Scene_MergeByRegionsStrategy_free(Scene_MergeByRegionsStrategy * sel);

typedef enum {
 Scene_MergeHiddenPartsMode_Destroy = 0,
 Scene_MergeHiddenPartsMode_MakeVisible = 1,
 Scene_MergeHiddenPartsMode_MergeSeparately = 2,
} Scene_MergeHiddenPartsMode;

typedef enum {
 Scene_MergeStrategy_MergeParts = 0,
 Scene_MergeStrategy_MergeByMaterials = 1,
} Scene_MergeStrategy;

typedef Scene_Component Scene_Metadata;

typedef struct {
   Core_String name;
   Core_String value;
} Scene_PropertyValue;

PXZ_EXPORTED void Scene_PropertyValue_init(Scene_PropertyValue * str);
PXZ_EXPORTED void Scene_PropertyValue_free(Scene_PropertyValue * str);
typedef struct {
   size_t size;
   Scene_PropertyValue * list;
} Scene_PropertyValueList;

PXZ_EXPORTED void Scene_PropertyValueList_init(Scene_PropertyValueList * list, size_t size = 0);
PXZ_EXPORTED void Scene_PropertyValueList_free(Scene_PropertyValueList * list);
typedef Scene_PropertyValueList Scene_MetadataDefinition;

typedef struct {
   size_t size;
   Scene_MetadataDefinition * list;
} Scene_MetadataDefinitionList;

PXZ_EXPORTED void Scene_MetadataDefinitionList_init(Scene_MetadataDefinitionList * list, size_t size = 0);
PXZ_EXPORTED void Scene_MetadataDefinitionList_free(Scene_MetadataDefinitionList * list);
typedef struct {
   size_t size;
   Scene_Metadata * list;
} Scene_MetadataList;

PXZ_EXPORTED void Scene_MetadataList_init(Scene_MetadataList * list, size_t size = 0);
PXZ_EXPORTED void Scene_MetadataList_free(Scene_MetadataList * list);
typedef Geom_GeomEntity Scene_Occurrence;

typedef struct {
   size_t size;
   Scene_Occurrence * list;
} Scene_OccurrenceList;

PXZ_EXPORTED void Scene_OccurrenceList_init(Scene_OccurrenceList * list, size_t size = 0);
PXZ_EXPORTED void Scene_OccurrenceList_free(Scene_OccurrenceList * list);
typedef struct {
   size_t size;
   Scene_OccurrenceList * list;
} Scene_OccurrenceListList;

PXZ_EXPORTED void Scene_OccurrenceListList_init(Scene_OccurrenceListList * list, size_t size = 0);
PXZ_EXPORTED void Scene_OccurrenceListList_free(Scene_OccurrenceListList * list);
typedef Scene_Component Scene_OoCComponent;

typedef struct {
   Scene_OccurrenceList occurrences;
   Core_IntList parents;
   Core_StringList names;
   Core_InheritableBoolList visibles;
   Material_MaterialList materials;
   Core_IntList transformIndices;
   Geom_Matrix4List transformMatrices;
   Core_StringPairListList customProperties;
} Scene_PackedTree;

PXZ_EXPORTED void Scene_PackedTree_init(Scene_PackedTree * str);
PXZ_EXPORTED void Scene_PackedTree_free(Scene_PackedTree * str);
typedef Scene_Component Scene_Part;

typedef struct {
   size_t size;
   Scene_Part * list;
} Scene_PartList;

PXZ_EXPORTED void Scene_PartList_init(Scene_PartList * list, size_t size = 0);
PXZ_EXPORTED void Scene_PartList_free(Scene_PartList * list);
typedef Core_Entity Scene_PositionalLight;

typedef enum {
 Scene_Primitive_Type_CUBE = 0,
 Scene_Primitive_Type_SPHERE = 1,
 Scene_Primitive_Type_PLAN = 2,
 Scene_Primitive_Type_CONE = 3,
 Scene_Primitive_Type_ARROW = 4,
 Scene_Primitive_Type_CYLINDER = 5,
} Scene_Primitive_Type;

typedef struct {
   Scene_Occurrence occurrence;
   Geom_Point3 position;
} Scene_ProberInfo;

PXZ_EXPORTED void Scene_ProberInfo_init(Scene_ProberInfo * str);
PXZ_EXPORTED void Scene_ProberInfo_free(Scene_ProberInfo * str);
typedef struct {
   Core_Double rayParam;
   Scene_Occurrence occurrence;
   Core_Int triangleIndex;
   Geom_Point2 triangleParam;
} Scene_RayHit;

PXZ_EXPORTED void Scene_RayHit_init(Scene_RayHit * str);
PXZ_EXPORTED void Scene_RayHit_free(Scene_RayHit * str);
typedef struct {
   size_t size;
   Scene_RayHit * list;
} Scene_RayHitList;

PXZ_EXPORTED void Scene_RayHitList_init(Scene_RayHitList * list, size_t size = 0);
PXZ_EXPORTED void Scene_RayHitList_free(Scene_RayHitList * list);
typedef struct {
   Core_Int TextureSize;
   Core_Boolean KeepTextureRatio;
} Scene_ResizeByMaximumSizeOptions;

PXZ_EXPORTED void Scene_ResizeByMaximumSizeOptions_init(Scene_ResizeByMaximumSizeOptions * str);
PXZ_EXPORTED void Scene_ResizeByMaximumSizeOptions_free(Scene_ResizeByMaximumSizeOptions * str);
struct Scene_ResizeByTexturesOptions {
   Core_None AllTextures;
   Material_ImageList Selection;
   typedef enum {
      UNKNOWN=0,
      ALLTEXTURES,
      SELECTION
   } Type;

   Type _type; 
};

PXZ_EXPORTED void Scene_ResizeByTexturesOptions_init(Scene_ResizeByTexturesOptions * sel);
PXZ_EXPORTED void Scene_ResizeByTexturesOptions_free(Scene_ResizeByTexturesOptions * sel);

struct Scene_ResizeTexturesInputMode {
   Scene_OccurrenceList Occurrences;
   Scene_ResizeByTexturesOptions Textures;
   typedef enum {
      UNKNOWN=0,
      OCCURRENCES,
      TEXTURES
   } Type;

   Type _type; 
};

PXZ_EXPORTED void Scene_ResizeTexturesInputMode_init(Scene_ResizeTexturesInputMode * sel);
PXZ_EXPORTED void Scene_ResizeTexturesInputMode_free(Scene_ResizeTexturesInputMode * sel);

struct Scene_ResizeTexturesResizeMode {
   Core_Percent Ratio;
   Scene_ResizeByMaximumSizeOptions MaximumSize;
   typedef enum {
      UNKNOWN=0,
      RATIO,
      MAXIMUMSIZE
   } Type;

   Type _type; 
};

PXZ_EXPORTED void Scene_ResizeTexturesResizeMode_init(Scene_ResizeTexturesResizeMode * sel);
PXZ_EXPORTED void Scene_ResizeTexturesResizeMode_free(Scene_ResizeTexturesResizeMode * sel);

typedef Core_Entity Scene_SpotLight;

typedef Scene_Shape Scene_TessellatedShape;

typedef Core_Entity Scene_Variant;

typedef Scene_Component Scene_VariantComponent;

typedef struct {
   size_t size;
   Scene_VariantComponent * list;
} Scene_VariantComponentList;

PXZ_EXPORTED void Scene_VariantComponentList_init(Scene_VariantComponentList * list, size_t size = 0);
PXZ_EXPORTED void Scene_VariantComponentList_free(Scene_VariantComponentList * list);
typedef struct {
   Scene_Variant variant;
   Scene_PropertyValueList overridedProperties;
} Scene_VariantDefinition;

PXZ_EXPORTED void Scene_VariantDefinition_init(Scene_VariantDefinition * str);
PXZ_EXPORTED void Scene_VariantDefinition_free(Scene_VariantDefinition * str);
typedef struct {
   size_t size;
   Scene_VariantDefinition * list;
} Scene_VariantDefinitionList;

PXZ_EXPORTED void Scene_VariantDefinitionList_init(Scene_VariantDefinitionList * list, size_t size = 0);
PXZ_EXPORTED void Scene_VariantDefinitionList_free(Scene_VariantDefinitionList * list);
typedef struct {
   size_t size;
   Scene_VariantDefinitionList * list;
} Scene_VariantDefinitionListList;

PXZ_EXPORTED void Scene_VariantDefinitionListList_init(Scene_VariantDefinitionListList * list, size_t size = 0);
PXZ_EXPORTED void Scene_VariantDefinitionListList_free(Scene_VariantDefinitionListList * list);
typedef struct {
   size_t size;
   Scene_Variant * list;
} Scene_VariantList;

PXZ_EXPORTED void Scene_VariantList_init(Scene_VariantList * list, size_t size = 0);
PXZ_EXPORTED void Scene_VariantList_free(Scene_VariantList * list);
typedef enum {
 Scene_VisibilityMode_Inherited = 0,
 Scene_VisibilityMode_Hide = 1,
} Scene_VisibilityMode;



#endif
