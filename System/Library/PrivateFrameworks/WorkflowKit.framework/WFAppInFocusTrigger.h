/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFAppInFocusTrigger : WFTrigger {

	BOOL _onFocus;
	BOOL _onBackground;
	NSArray* _selectedBundleIdentifiers;

}

@property (nonatomic,copy) NSArray * selectedBundleIdentifiers;              //@synthesize selectedBundleIdentifiers=_selectedBundleIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL onFocus;                                   //@synthesize onFocus=_onFocus - In the implementation block
@property (assign,nonatomic) BOOL onBackground;                              //@synthesize onBackground=_onBackground - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isUserInitiated;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)onFocusIgnoredLaunchReasons;
-(id)onBackgroundIgnoredLaunchReasons;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(BOOL)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(NSArray *)selectedBundleIdentifiers;
-(BOOL)onFocus;
-(BOOL)onBackground;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setSelectedBundleIdentifiers:(NSArray *)arg1 ;
-(void)setOnFocus:(BOOL)arg1 ;
-(void)setOnBackground:(BOOL)arg1 ;
@end
