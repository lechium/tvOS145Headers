/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FBSSceneLayer.h>

@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer {

	NSString* _sceneID;

}

@property (nonatomic,copy,readonly) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)alignment;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)sceneID;
-(id)_succinctDescription;
-(id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2 sceneID:(id)arg3 ;
-(id)initWithExternalSceneID:(id)arg1 level:(double)arg2 ;
-(id)initWithExternalSceneID:(id)arg1 trackingContext:(id)arg2 ;
-(BOOL)isExternalSceneLayer;
@end

