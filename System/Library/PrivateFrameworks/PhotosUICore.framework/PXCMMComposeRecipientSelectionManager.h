/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXCMMComposeRecipientSelectionManagerDelegate;
@class NSMutableOrderedSet, PXCMMComposeRecipientDataSource, PXCMMComposeRecipientSelectionSnapshot;

@interface PXCMMComposeRecipientSelectionManager : NSObject {

	NSMutableOrderedSet* _selectedComposeRecipients;
	NSMutableOrderedSet* _selectedRecipients;
	PXCMMComposeRecipientDataSource* _dataSource;
	id<PXCMMComposeRecipientSelectionManagerDelegate> _delegate;
	PXCMMComposeRecipientSelectionSnapshot* _selectionSnapshot;

}

@property (nonatomic,retain) PXCMMComposeRecipientSelectionSnapshot * selectionSnapshot;                     //@synthesize selectionSnapshot=_selectionSnapshot - In the implementation block
@property (nonatomic,readonly) PXCMMComposeRecipientDataSource * dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMComposeRecipientSelectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)new;
-(id)init;
-(id<PXCMMComposeRecipientSelectionManagerDelegate>)delegate;
-(void)setDelegate:(id<PXCMMComposeRecipientSelectionManagerDelegate>)arg1 ;
-(PXCMMComposeRecipientDataSource *)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(void)selectAll;
-(void)setDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(void)setSelectionSnapshot:(PXCMMComposeRecipientSelectionSnapshot *)arg1 ;
-(PXCMMComposeRecipientSelectionSnapshot *)selectionSnapshot;
-(void)setSelectedState:(BOOL)arg1 atIndex:(long long)arg2 ;
-(id)_setSelectedState:(BOOL)arg1 forComposeRecipients:(id)arg2 ;
-(id)_createComposeRecipientSelectionSnapshotFromCurrentState;
-(void)_invalidateCurrentSelectionSnapshotWithChangedComposeRecipients:(id)arg1 ;
@end

