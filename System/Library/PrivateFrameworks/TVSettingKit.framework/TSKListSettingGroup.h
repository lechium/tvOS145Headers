/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSettingKit/TSKSettingGroup.h>

@class NSArray;

@interface TSKListSettingGroup : TSKSettingGroup {

	BOOL _comparesArrayDeeply;
	/*^block*/id _itemConfigurationBlock;
	NSArray* _cachedValue;

}

@property (nonatomic,copy) NSArray * cachedValue;                   //@synthesize cachedValue=_cachedValue - In the implementation block
@property (nonatomic,copy) id itemConfigurationBlock;               //@synthesize itemConfigurationBlock=_itemConfigurationBlock - In the implementation block
@property (assign,nonatomic) BOOL comparesArrayDeeply;              //@synthesize comparesArrayDeeply=_comparesArrayDeeply - In the implementation block
+(id)listGroupWithTitle:(id)arg1 representedObject:(id)arg2 keyPath:(id)arg3 configurationBlock:(/*^block*/id)arg4 ;
-(NSArray *)cachedValue;
-(id)initWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4 readOnly:(BOOL)arg5 accessoryTypes:(unsigned long long)arg6 childControllerClass:(Class)arg7 ;
-(void)_prepareSettingItems;
-(void)_updateSettingItemsWithValue:(id)arg1 ;
-(void)setItemConfigurationBlock:(id)arg1 ;
-(id)_itemsFromInputValues:(id)arg1 ;
-(void)setCachedValue:(NSArray *)arg1 ;
-(BOOL)comparesArrayDeeply;
-(id)itemConfigurationBlock;
-(void)setComparesArrayDeeply:(BOOL)arg1 ;
@end

