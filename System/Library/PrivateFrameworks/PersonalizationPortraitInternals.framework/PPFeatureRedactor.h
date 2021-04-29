/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _PASLock, PPTrialWrapper;

@interface PPFeatureRedactor : NSObject {

	_PASLock* _lock;
	PPTrialWrapper* _trialWrapper;

}
-(id)initWithTrialWrapper:(id)arg1 namespaceName:(id)arg2 ;
-(void)_loadAssetsWithNamespaceName:(id)arg1 ;
-(void)_loadWithAssetData:(id)arg1 ;
-(void)transformFeaturesInPlace:(id)arg1 ;
@end
