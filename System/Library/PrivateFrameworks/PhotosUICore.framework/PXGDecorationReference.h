/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXGSpriteReference;

@interface PXGDecorationReference : NSObject {

	PXGSpriteReference* _decoratedSpriteReference;
	long long _decorationType;

}

@property (nonatomic,readonly) PXGSpriteReference * decoratedSpriteReference;              //@synthesize decoratedSpriteReference=_decoratedSpriteReference - In the implementation block
@property (nonatomic,readonly) long long decorationType;                                   //@synthesize decorationType=_decorationType - In the implementation block
-(id)init;
-(long long)decorationType;
-(PXGSpriteReference *)decoratedSpriteReference;
-(id)initWithDecoratedSpriteReference:(id)arg1 decorationType:(long long)arg2 ;
@end
