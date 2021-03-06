/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface CNUIPeopleGroupsGridLayout : UICollectionViewFlowLayout {

	CGSize _intrinsicContentSize;

}

@property (assign,nonatomic) CGSize intrinsicContentSize;              //@synthesize intrinsicContentSize=_intrinsicContentSize - In the implementation block
+(unsigned long long)maximumNumberOfRowsForTraitCollection:(id)arg1 ;
+(unsigned long long)groupCountPerRowForTraitCollection:(id)arg1 ;
+(CGSize)itemSizeForTraitCollection:(id)arg1 contentSizeCategory:(id)arg2 ;
+(double)verticalMargin;
+(unsigned long long)maximumNumberOfGroupsForTraitCollection:(id)arg1 ;
+(id)layoutForTraitCollection:(id)arg1 contentSizeCategory:(id)arg2 numberOfGroups:(unsigned long long)arg3 ;
-(CGSize)intrinsicContentSize;
-(void)setIntrinsicContentSize:(CGSize)arg1 ;
@end

