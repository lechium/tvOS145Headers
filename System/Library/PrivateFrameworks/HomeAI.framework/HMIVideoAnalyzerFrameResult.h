/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMIVideoFrame, NSSet, NSString;

@interface HMIVideoAnalyzerFrameResult : HMFObject <HMFLogging, NSSecureCoding> {

	HMIVideoFrame* _frame;
	NSSet* _events;
	CGRect _regionOfInterest;

}

@property (readonly) CGRect regionOfInterest;                       //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
@property (readonly) HMIVideoFrame * frame;                         //@synthesize frame=_frame - In the implementation block
@property (readonly) NSSet * events;                                //@synthesize events=_events - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMIVideoFrame *)frame;
-(NSSet *)events;
-(CGRect)regionOfInterest;
-(id)attributeDescriptions;
-(id)initWithFrame:(id)arg1 events:(id)arg2 regionOfInterest:(CGRect)arg3 ;
-(id)redactedCopy;
-(id)maxConfidenceEventForEventClass:(Class)arg1 ;
-(id)initWithFrame:(id)arg1 events:(id)arg2 ;
-(id)maxConfidenceEvents;
@end
