/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PVCanceler : NSObject {

	BOOL _canceled;
	/*^block*/id _updateBlock;

}

@property (assign,nonatomic) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,copy) id updateBlock;               //@synthesize updateBlock=_updateBlock - In the implementation block
+(id)cancelerWithUpdateBlock:(/*^block*/id)arg1 ;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
@end
