/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIEventAttribution;

@interface UISceneOpenExternalURLOptions : NSObject {

	BOOL _universalLinksOnly;
	UIEventAttribution* _eventAttribution;

}

@property (assign,nonatomic) BOOL universalLinksOnly;                          //@synthesize universalLinksOnly=_universalLinksOnly - In the implementation block
@property (nonatomic,copy) UIEventAttribution * eventAttribution;              //@synthesize eventAttribution=_eventAttribution - In the implementation block
-(BOOL)universalLinksOnly;
-(UIEventAttribution *)eventAttribution;
-(void)setUniversalLinksOnly:(BOOL)arg1 ;
-(void)setEventAttribution:(UIEventAttribution *)arg1 ;
@end

