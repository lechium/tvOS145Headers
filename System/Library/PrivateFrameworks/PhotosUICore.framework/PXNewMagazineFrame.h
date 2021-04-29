/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXNewMagazineFrame : NSObject {

	long long _width;
	long long _height;
	double _aspectRatio;
	double _minAspectRatio;
	double _maxAspectRatio;

}

@property (assign,nonatomic) long long width;                        //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) long long numberOfTiles; 
@property (assign,nonatomic) double aspectRatio;                     //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) double minAspectRatio;                  //@synthesize minAspectRatio=_minAspectRatio - In the implementation block
@property (assign,nonatomic) double maxAspectRatio;                  //@synthesize maxAspectRatio=_maxAspectRatio - In the implementation block
-(id)description;
-(long long)width;
-(long long)height;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(double)aspectRatio;
-(void)setAspectRatio:(double)arg1 ;
-(void)setMinAspectRatio:(double)arg1 ;
-(void)setMaxAspectRatio:(double)arg1 ;
-(double)minAspectRatio;
-(double)maxAspectRatio;
-(id)initWithWidth:(long long)arg1 height:(long long)arg2 ;
-(long long)numberOfTiles;
@end

