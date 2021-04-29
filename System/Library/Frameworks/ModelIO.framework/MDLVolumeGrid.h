/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ModelIO/ModelIO-Structs.h>
@interface MDLVolumeGrid : NSObject {

	unique_ptr<ModelIO::SCNOctree, std::__1::default_delete<ModelIO::SCNOctree>>* _octree;

}
-(id)initWithAsset:(id)arg1 divisions:(int)arg2 ;
-(id)initWithObject:(id)arg1 divisions:(int)arg2 ;
-(id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorWidth:(float)arg3 exteriorWidth:(float)arg4 patchRadius:(float)arg5 ;
-(id)meshWithStyle:(unsigned long long)arg1 ;
-(unsigned long long*)trianglesIntersectingRayWithOrigin:(unsigned long long*)arg1 ;
@end
