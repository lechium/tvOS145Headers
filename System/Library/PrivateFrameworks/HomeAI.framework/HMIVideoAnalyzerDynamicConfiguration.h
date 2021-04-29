/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface HMIVideoAnalyzerDynamicConfiguration : HMFObject <HMFLogging, NSSecureCoding> {

	BOOL _recognizeFaces;
	long long _eventTriggers;
	NSArray* _activityZones;

}

@property (assign) BOOL recognizeFaces;                             //@synthesize recognizeFaces=_recognizeFaces - In the implementation block
@property (assign) long long eventTriggers;                         //@synthesize eventTriggers=_eventTriggers - In the implementation block
@property (retain) NSArray * activityZones;                         //@synthesize activityZones=_activityZones - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(NSArray *)activityZones;
-(void)setActivityZones:(NSArray *)arg1 ;
-(long long)eventTriggers;
-(void)setEventTriggers:(long long)arg1 ;
-(BOOL)recognizeFaces;
-(void)setRecognizeFaces:(BOOL)arg1 ;
@end
