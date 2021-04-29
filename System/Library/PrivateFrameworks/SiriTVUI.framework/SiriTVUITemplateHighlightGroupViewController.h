/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUITemplateItemViewController.h>

@class SiriTVUITemplateItemViewController, SiriTVUITemplateHighlightGroupView, SiriTVUIHighlightGroupViewTemplateItem;

@interface SiriTVUITemplateHighlightGroupViewController : SiriTVUITemplateItemViewController {

	SiriTVUITemplateItemViewController* _currentViewController;
	long long _selectedIndex;

}

@property (nonatomic,retain) SiriTVUITemplateHighlightGroupView * view; 
@property (nonatomic,retain) SiriTVUIHighlightGroupViewTemplateItem * templateItem; 
@property (assign,nonatomic) long long selectedIndex;                                            //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(void)setSelectedIndex:(long long)arg1 ;
-(long long)selectedIndex;
-(void)loadView;
-(BOOL)supportsSwipeDismissal;
-(void)templateItemViewController:(id)arg1 didHighlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(BOOL)arg4 ;
@end

