/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@class NSString;

@interface HMFAssertion : HMFObject <HMFLogging> {

	BOOL _valid;
	NSString* _name;

}

@property (copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * uniqueDescription; 
@property (getter=isValid,readonly) BOOL valid;                      //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleIdentifier;
+(id)logCategory;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithName:(id)arg1 ;
-(id)logIdentifier;
-(NSString *)uniqueDescription;
-(void)mark;
-(BOOL)acquire:(id*)arg1 ;
@end

