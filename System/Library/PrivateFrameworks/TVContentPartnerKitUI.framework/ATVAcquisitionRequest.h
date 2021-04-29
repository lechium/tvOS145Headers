/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVCKAcquisitionProperties;

@interface ATVAcquisitionRequest : NSObject {

	BOOL _cancelled;
	TVCKAcquisitionProperties* _properties;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) TVCKAcquisitionProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) id completionBlock;                                  //@synthesize completionBlock=_completionBlock - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
-(void)setCompletionBlock:(id)arg1 ;
-(TVCKAcquisitionProperties *)properties;
-(BOOL)isCancelled;
-(id)completionBlock;
-(void)setProperties:(TVCKAcquisitionProperties *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
@end

