/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSetupKit.framework/TVSetupKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSetupKit/TVSKBasicStepResult.h>

@interface TVSKConsentStepResult : TVSKBasicStepResult {

	long long _didConsent;

}

@property (assign,nonatomic) long long didConsent;              //@synthesize didConsent=_didConsent - In the implementation block
+(id)successResultWithConsent:(long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setDidConsent:(long long)arg1 ;
-(id)_initWithSuccess:(BOOL)arg1 skippedDueToManagedConfiguration:(BOOL)arg2 ;
-(long long)didConsent;
@end

