/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CLSSceneMatcher : NSObject {

	NSMutableDictionary* _confidenceThresholdBySceneIdentifierBySceneLabel;

}
+(id)confidenceThresholdTypeBySceneLabel;
+(id)sceneNamesBySceneLabel;
+(id)sharedSceneMatcher;
+(id)junkSceneNames;
+(id)junkSceneNamesLegacy;
+(id)babyChildTeenAdultAndPetSceneNames;
+(id)babyAndPetSceneNames;
+(id)childTeenAndAdultSceneNames;
+(id)interestingSceneNames;
+(id)whiteboardSceneNames;
+(id)sceneNamesWithSceneLabel:(id)arg1 ;
-(id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)arg1 ;
@end

