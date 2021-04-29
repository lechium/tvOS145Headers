/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, NSMutableArray;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	CGSize origin;
	CGSize size;
} SCD_Struct_MK1;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	BOOL field5;
} SCD_Struct_MK2;

typedef struct {
	unsigned field1;
	void field2;
} SCD_Struct_MK3;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	BOOL shouldZoomToFit;
	double idealCenterCoordinateDistance;
	BOOL shouldPreserveUserSpecifiedZoomLevel;
	BOOL resetAfterTracking;
} SCD_Struct_MK5;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	CGSize field1;
	CLLocationCoordinate2D field2;
} SCD_Struct_MK7;

typedef struct {
	BOOL field1;
} SCD_Struct_MK8;

typedef struct {
	double field1;
	CLLocationCoordinate2D field2;
} SCD_Struct_MK9;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	CGSize field1;
	CGSize field2;
	double field3;
	double field4;
	CGSize field5;
	CGSize field6;
	CGSize field7;
} SCD_Struct_MK11;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	CLLocationCoordinate2D center;
	CGSize span;
} SCD_Struct_MK13;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	CGPoint origin;
	CGPoint offset;
	long long position;
	CGPoint desiredPoint;
	CGRect desiredBounds;
} SCD_Struct_MK16;

typedef struct {
	double margin;
	double cornerRadius;
	double arrowBase;
	double arrowHeight;
	BOOL useRadialSmoothing;
	/*function pointer*/void* ;
	CGSize radialSmoothing;
	CGSize) nonRadialSmoothing;
	BOOL alignDetailViewBaseline;
	BOOL scaleVerticalPaddingForDynamicType;
	UIEdgeInsets padding;
} SCD_Struct_MK17;

typedef struct CGPath* CGPathRef;

typedef struct CGContext* CGContextRef;

typedef struct CGImage* CGImageRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	BOOL( field5;
	/*function pointer*/void* field6;
	= field7;
	CGSize field8;
	CGSize) field9;
	BOOL field10;
	BOOL field11;
	UIEdgeInsets field12;
} SCD_Struct_MK21;

typedef struct {
	long long displayStyle;
	long long collectionsPerRow;
} SCD_Struct_MK22;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CollectionsPlacecardEvent {
	int action;
	NSString* value;
	NSNumber* collectionId;
	NSNumber* collectionCurrentlySaved;
	NSNumber* horizontalIndex;
	int target;
	int cardType;
	NSMutableArray* possibleActions;
	NSMutableArray* impossibleActions;
	NSNumber* verticalIndex;
} CollectionsPlacecardEvent;

typedef struct {
	BOOL abbreviatedUnits;
	long long distanceDetailLevel;
	BOOL spoken;
	BOOL dropTimestampAMPM;
	BOOL rightToLeft;
	double referenceDate;
} SCD_Struct_MK25;

typedef struct CGColor* CGColorRef;

typedef struct {
	unsigned char timePeriod;
	unsigned char overlayType;
	unsigned char applicationState;
	unsigned char searchResultsType;
	BOOL mapHasLabels;
} SCD_Struct_MK27;

typedef struct __IOHIDManager* IOHIDManagerRef;

typedef struct Matrix<double, 2, 1> {
	double _e[2];
} Matrix<double, 2, 1>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *>>;

typedef struct _compressed_pair<unsigned long, std::__1::hash<_MKAnnotationViewPair>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::hash<_MKAnnotationViewPair>>;

typedef struct _compressed_pair<float, std::__1::equal_to<_MKAnnotationViewPair>> {
	float __value_;
} compressed_pair<float, std::__1::equal_to<_MKAnnotationViewPair>>;

typedef struct _hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> {
	__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *>, std::__1::allocator<std::__1::__hash_node<_MKAnnotationViewPair, void *>>> {
	hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *>, std::__1::allocator<std::__1::__hash_node<_MKAnnotationViewPair, void *>>>;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *>> {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *>> __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *>>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *>>> {
	__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *>> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *>>>;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *>>> {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *>>> __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *>>>;

typedef struct _hash_table<_MKAnnotationViewPair, std::__1::hash<_MKAnnotationViewPair>, std::__1::equal_to<_MKAnnotationViewPair>, std::__1::allocator<_MKAnnotationViewPair>> {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *>>> __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *>, std::__1::allocator<std::__1::__hash_node<_MKAnnotationViewPair, void *>>> __p1_;
	compressed_pair<unsigned long, std::__1::hash<_MKAnnotationViewPair>> __p2_;
	compressed_pair<float, std::__1::equal_to<_MKAnnotationViewPair>> __p3_;
} hash_table<_MKAnnotationViewPair, std::__1::hash<_MKAnnotationViewPair>, std::__1::equal_to<_MKAnnotationViewPair>, std::__1::allocator<_MKAnnotationViewPair>>;

typedef struct unordered_set<_MKAnnotationViewPair, std::__1::hash<_MKAnnotationViewPair>, std::__1::equal_to<_MKAnnotationViewPair>, std::__1::allocator<_MKAnnotationViewPair>> {
	hash_table<_MKAnnotationViewPair, std::__1::hash<_MKAnnotationViewPair>, std::__1::equal_to<_MKAnnotationViewPair>, std::__1::allocator<_MKAnnotationViewPair>> __table_;
} unordered_set<_MKAnnotationViewPair, std::__1::hash<_MKAnnotationViewPair>, std::__1::equal_to<_MKAnnotationViewPair>, std::__1::allocator<_MKAnnotationViewPair>>;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_MK40;

typedef struct _compressed_pair<MKAnnotationView **, std::__1::allocator<MKAnnotationView *>> {
	id __value_;
} compressed_pair<MKAnnotationView **, std::__1::allocator<MKAnnotationView *>>;

typedef struct vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *>> {
	id __begin_;
	id __end_;
	compressed_pair<MKAnnotationView **, std::__1::allocator<MKAnnotationView *>> __end_cap_;
} vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *>>;

typedef struct __CTLine* CTLineRef;

typedef struct GEOOnce_s {
	os_unfair_lock_s lock;
	BOOL didRun;
} GEOOnce_s;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	long long field1;
	CLLocationCoordinate2D field2;
	CGPoint field3;
	CGPoint field4;
	id field5;
	BOOL field6;
} SCD_Struct_MK47;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
} SCD_Struct_MK48;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
	double field4;
} SCD_Struct_MK49;

typedef struct {
	long long x;
	long long y;
	long long z;
	double contentScaleFactor;
} SCD_Struct_MK50;

typedef struct GEOStandardTileKey {
	unsigned reserved : 40;
	unsigned z : 6;
	unsigned x : 26;
	unsigned y : 26;
	unsigned type : 14;
	unsigned pixelSize : 4;
	unsigned textScale : 4;
} GEOStandardTileKey;

typedef struct GEOGloriaQuadIDTileKey {
	unsigned z : 6;
	unsigned quadKey : 64;
	unsigned type : 14;
	unsigned padding : 36;
} GEOGloriaQuadIDTileKey;

typedef struct GEORegionalResourceKey {
	unsigned index : 32;
	unsigned scenarios : 8;
	unsigned type : 6;
	unsigned pixelSize : 8;
	unsigned textScale : 8;
	unsigned forceRefetch : 1;
	unsigned padding : 57;
} GEORegionalResourceKey;

typedef struct GEOSputnikMetadataKey {
	unsigned part : 32;
	unsigned region : 24;
	unsigned type : 14;
	unsigned pixelSize : 8;
	unsigned padding : 42;
} GEOSputnikMetadataKey;

typedef struct GEOFlyoverKey {
	unsigned z : 6;
	unsigned x : 26;
	unsigned y : 26;
	unsigned h : 8;
	unsigned region : 24;
	unsigned type : 14;
	unsigned pixelSize : 8;
	unsigned textScale : 8;
} GEOFlyoverKey;

typedef struct GEOTransitLineSelectionKey {
	unsigned z : 6;
	unsigned x : 25;
	unsigned y : 25;
	unsigned muid : 64;
} GEOTransitLineSelectionKey;

typedef struct GEOPolygonSelectionKey {
	unsigned z : 6;
	unsigned x : 25;
	unsigned y : 25;
	unsigned polyId : 64;
} GEOPolygonSelectionKey;

typedef struct GEOTileOverlayKey {
	unsigned z : 6;
	unsigned x : 26;
	unsigned y : 26;
	unsigned contentScale : 8;
	unsigned providerId : 32;
	unsigned padding : 22;
} GEOTileOverlayKey;

typedef struct GEOIdentifiedResourceKey {
	unsigned identifier;
	unsigned char levelOfDetail;
	unsigned char type;
	unsigned padding : 64;
	unsigned padding2 : 8;
} GEOIdentifiedResourceKey;

typedef struct GEOTileKey {
	unsigned provider : 7;
	unsigned expires : 1;
	/*function pointer*/void* ;
	GEOStandardTileKey standard;
	GEOGloriaQuadIDTileKey gloriaQuad;
	GEORegionalResourceKey regional;
	GEOSputnikMetadataKey sputnikMetadata;
	GEOFlyoverKey flyover;
	GEOTransitLineSelectionKey transitLineSelection;
	GEOPolygonSelectionKey polygonSelection;
	GEOTileOverlayKey tileOverlay;
	GEOIdentifiedResourceKey) identifiedResource;
} GEOTileKey;

typedef struct {
	CGSize field1;
	double field2;
	double field3;
	double field4;
	CGSize field5;
	double field6;
	double field7;
	double field8;
	long long field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
	double field15;
	double field16;
	double field17;
	double field18;
	double field19;
	double field20;
	double field21;
	double field22;
	double field23;
	double field24;
	double field25;
	BOOL field26;
	double field27;
	double field28;
	double field29;
	BOOL field30;
	BOOL field31;
} SCD_Struct_MK61;
