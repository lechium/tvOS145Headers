/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TXRBufferAllocator.h>

@protocol MTLDevice;
@class NSString;

@interface MTKTextureIOBufferAllocator : NSObject <TXRBufferAllocator> {

	id<MTLDevice> _device;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocNotification:(/*^block*/id)arg3 error:(id*)arg4 ;
@end

