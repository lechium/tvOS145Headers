/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MCAssetVideo, NSString;

@interface MCSlideAsset : NSObject {

	MCAssetVideo* _asset;
	NSString* _kenBurnsType;
	CGPoint center;
	double scale;
	double rotation;

}

@property (retain) MCAssetVideo * asset;               //@synthesize asset=_asset - In the implementation block
@property (copy) NSString * kenBurnsType;              //@synthesize kenBurnsType=_kenBurnsType - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(MCAssetVideo *)asset;
-(void)setAsset:(MCAssetVideo *)arg1 ;
-(NSString *)kenBurnsType;
-(void)setKenBurnsType:(NSString *)arg1 ;
@end
