/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIFocusItem;
@class NSMutableArray, NSMapTable, NSString;

@interface UIFocusRingClientState : NSObject {

	id<UIFocusItem> _currentFocusItem;
	NSMutableArray* _activeFocusLayers;
	NSMapTable* _activeFocusLayersToItems;
	NSString* _clientID;

}

@property (assign,nonatomic,__weak) id<UIFocusItem> currentFocusItem;              //@synthesize currentFocusItem=_currentFocusItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeFocusLayers;                   //@synthesize activeFocusLayers=_activeFocusLayers - In the implementation block
@property (nonatomic,retain) NSMapTable * activeFocusLayersToItems;                //@synthesize activeFocusLayersToItems=_activeFocusLayersToItems - In the implementation block
@property (nonatomic,retain) NSString * clientID;                                  //@synthesize clientID=_clientID - In the implementation block
-(id)description;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(id)initWithClientID:(id)arg1 ;
-(NSMapTable *)activeFocusLayersToItems;
-(id<UIFocusItem>)currentFocusItem;
-(void)setCurrentFocusItem:(id<UIFocusItem>)arg1 ;
-(NSMutableArray *)activeFocusLayers;
-(void)setActiveFocusLayers:(NSMutableArray *)arg1 ;
-(void)setActiveFocusLayersToItems:(NSMapTable *)arg1 ;
@end

