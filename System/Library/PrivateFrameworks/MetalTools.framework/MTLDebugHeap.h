/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsHeap.h>
#import <libobjc.A.dylib/MTLDebugResourcePurgeable.h>

@class MTLDebugDevice;

@interface MTLDebugHeap : MTLToolsHeap <MTLDebugResourcePurgeable> {

	atomic<int> _purgeableStateToken;
	BOOL _purgeableStateHasBeenSet;
	MTLDebugDevice* _debugDevice;

}

@property (nonatomic,readonly) MTLDebugDevice * debugDevice;              //@synthesize debugDevice=_debugDevice - In the implementation block
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1 ;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;
-(BOOL)purgeableStateValidForRendering;
-(id)initWithHeap:(id)arg1 device:(id)arg2 ;
-(void)validateHeapResourceOptions:(unsigned long long)arg1 isTexture:(BOOL)arg2 isIOSurface:(BOOL)arg3 ;
-(void)validateHeapTextureUsage:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)validatePixelFormatWithHeap:(unsigned long long)arg1 ;
-(void)validateOffset:(unsigned long long)arg1 withRequirements:(NSRange)arg2 ;
-(MTLDebugDevice *)debugDevice;
@end

