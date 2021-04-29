/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface UIContentSizeCategoryPreference : NSObject {

	NSString* _preferredContentSizeCategory;
	NSString* _preferredContentSizeCategoryCarPlay;

}

@property (nonatomic,retain) NSString * preferredContentSizeCategory;                     //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (nonatomic,retain) NSString * preferredContentSizeCategoryCarPlay;              //@synthesize preferredContentSizeCategoryCarPlay=_preferredContentSizeCategoryCarPlay - In the implementation block
+(id)system;
+(void)overrideSystemWithPreference:(id)arg1 ;
+(void)resetSystemPreferenceOverride;
+(void)overrideSystemWithPreference:(id)arg1 forBlock:(/*^block*/id)arg2 ;
+(void)_populateUserDefaultsContentSizeCategory:(id*)arg1 carPlay:(id*)arg2 ;
+(void)asyncOverrideSystemWithPreference:(id)arg1 ;
+(void)asyncResetSystemPreferenceOverride;
+(void)_resetSystemPreferenceOverride;
+(void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 ;
+(void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 forBlock:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)preferredContentSizeCategory;
-(void)checkForChanges;
-(id)initWithContentSizeCategory:(id)arg1 ;
-(id)initWithContentSizeCategory:(id)arg1 carPlay:(id)arg2 ;
-(id)initWithRawUserDefaults;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(NSString *)preferredContentSizeCategoryCarPlay;
-(void)setPreferredContentSizeCategoryCarPlay:(NSString *)arg1 ;
@end

