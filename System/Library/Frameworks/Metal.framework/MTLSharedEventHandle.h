/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MTLSharedEventHandle : NSObject <NSSecureCoding> {

	MTLSharedEventHandlePrivate* _priv;

}

@property (readonly) NSString * label; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)label;
-(unsigned)eventPort;
-(unsigned long long)labelTraceID;
-(id)initWithSharedEvent:(id)arg1 ;
@end

