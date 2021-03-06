/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServicesStore/CoreServicesStore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface _CSStore : NSObject <NSSecureCoding> {

	Store* _store;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(void)initialize;
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithError:(id*)arg1 ;
-(id)initByMovingStore:(Store*)arg1 ;
-(void)setExpectedAccessQueue:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 error:(id*)arg2 ;
@end

