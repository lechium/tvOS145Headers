/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IKAppDocumentDelegate <NSObject>
@optional
-(id)impressionableViewElementsForDocument:(id)arg1;
-(void)documentScrollToTop:(id)arg1;
-(void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3;
-(BOOL)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;

@required
-(void)documentNeedsUpdate:(id)arg1;
-(void)documentDidUpdate:(id)arg1;

@end

