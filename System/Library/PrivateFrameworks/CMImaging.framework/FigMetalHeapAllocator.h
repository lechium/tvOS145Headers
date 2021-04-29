/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMImaging/CMImaging-Structs.h>
#import <libobjc.A.dylib/FigMetalAllocatorImpl.h>

@protocol MTLHeap;
@class FigMetalUtils;

@interface FigMetalHeapAllocator : NSObject <FigMetalAllocatorImpl> {

	id<MTLHeap> _heap;
	unsigned long long _alignment;
	FigMetalUtils* _utils;
	unsigned long long _memSize;

}

@property (nonatomic,readonly) unsigned long long alignment;              //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) unsigned long long memSize;                //@synthesize memSize=_memSize - In the implementation block
@property (nonatomic,readonly) FigMetalUtils * utils;                     //@synthesize utils=_utils - In the implementation block
-(id)description;
-(unsigned long long)alignment;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)purgeResources;
-(unsigned long long)memSize;
-(id)initWithMetalUtils:(id)arg1 ;
-(int)setupWithDescriptor:(id)arg1 ;
-(SCD_Struct_Fi8)getSizeAndAlignForDescriptor:(id)arg1 ;
-(unsigned long long)textureOffset:(id)arg1 ;
-(BOOL)hasCreatedTexture:(id)arg1 ;
-(FigMetalUtils *)utils;
@end
