/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PXGAXInfo <PXGAXElement>
@property (nonatomic,readonly) long long axContentKind; 
@property (nonatomic,readonly) NSString * axText; 
@property (nonatomic,readonly) NSString * axTitle; 
@property (nonatomic,readonly) NSString * axSubtitle; 
@property (nonatomic,readonly) NSString * axImageName; 
@property (nonatomic,readonly) id<PXDisplayAsset> axAsset; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> axView; 
@required
-(long long)axContentKind;
-(NSString *)axText;
-(NSString *)axTitle;
-(NSString *)axSubtitle;
-(NSString *)axImageName;
-(id<PXDisplayAsset>)axAsset;
-(NSObject*<PXAnonymousView>)axView;

@end

