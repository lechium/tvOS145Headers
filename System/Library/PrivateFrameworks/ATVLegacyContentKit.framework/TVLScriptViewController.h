/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class TVLScriptArrayElement, TVLDocument;

@interface TVLScriptViewController : UIViewController {

	TVLScriptArrayElement* _feedElement;
	TVLDocument* _feedDocument;

}

@property (nonatomic,retain) TVLScriptArrayElement * feedElement;              //@synthesize feedElement=_feedElement - In the implementation block
@property (nonatomic,retain) TVLDocument * feedDocument;                       //@synthesize feedDocument=_feedDocument - In the implementation block
-(id)context;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(TVLDocument *)feedDocument;
-(id)initWithFeedElement:(id)arg1 ;
-(void)setFeedDocument:(TVLDocument *)arg1 ;
-(TVLScriptArrayElement *)feedElement;
-(void)setFeedElement:(TVLScriptArrayElement *)arg1 ;
@end

