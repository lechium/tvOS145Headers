/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHAsset;

@interface PGLongTailSuggestionCandidate : NSObject {

	PHAsset* _asset;
	unsigned long long _score;

}

@property (nonatomic,readonly) PHAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) unsigned long long score;              //@synthesize score=_score - In the implementation block
-(unsigned long long)score;
-(PHAsset *)asset;
-(id)initWithAsset:(id)arg1 score:(unsigned long long)arg2 ;
-(BOOL)isValidWithMeNodeLocalIdentifier:(id)arg1 ;
@end
