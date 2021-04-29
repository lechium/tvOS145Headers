/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSIndexSet, SiriTVUIViewStyle;

@interface SiriTVUIViewStyleRule : NSObject {

	NSIndexSet* _styleSelector;
	SiriTVUIViewStyle* _style;

}

@property (nonatomic,copy) NSIndexSet * styleSelector;              //@synthesize styleSelector=_styleSelector - In the implementation block
@property (nonatomic,copy) SiriTVUIViewStyle * style;               //@synthesize style=_style - In the implementation block
-(SiriTVUIViewStyle *)style;
-(void)setStyle:(SiriTVUIViewStyle *)arg1 ;
-(id)initWithStyleSelector:(id)arg1 style:(id)arg2 ;
-(NSIndexSet *)styleSelector;
-(void)setStyleSelector:(NSIndexSet *)arg1 ;
@end

