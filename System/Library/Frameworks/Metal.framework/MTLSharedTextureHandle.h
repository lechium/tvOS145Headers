/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MTLSharedTextureHandle : NSObject <NSSecureCoding> {

	MTLSharedTextureHandlePrivate* _priv;

}

@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(NSString *)label;
-(id<MTLDevice>)device;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 label:(id)arg2 ;
-(IOSurfaceRef)ioSurface;
-(unsigned)createMachPort;
@end
