/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol MemoryOwner;
@interface MiroPlayerViewController : UIViewController {

	id<MemoryOwner> _memoryOwnerDelegate;

}

@property (nonatomic,retain) id<MemoryOwner> memoryOwnerDelegate;              //@synthesize memoryOwnerDelegate=_memoryOwnerDelegate - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)warnTooManyLiveCompositors:(id)arg1 ;
-(id<MemoryOwner>)memoryOwnerDelegate;
-(void)setMemoryOwnerDelegate:(id<MemoryOwner>)arg1 ;
@end
