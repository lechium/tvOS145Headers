/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface PPTTLDeletionPolicyRule : NSObject {

	NSString* _bundleIdentifier;
	NSString* _groupIdentifier;
	NSNumber* _maxAgeSeconds;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * maxAgeSeconds;                 //@synthesize maxAgeSeconds=_maxAgeSeconds - In the implementation block
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)groupIdentifier;
-(NSNumber *)maxAgeSeconds;
-(id)initWithBundleIdentifier:(id)arg1 groupIdentifier:(id)arg2 maxAgeSeconds:(id)arg3 ;
@end

