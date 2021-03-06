/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXCPLStatusProvider;
@class PXCPLActionManager, PXObservable, PXCPLUIStatus, NSString;

@interface PXCPLUIStatusProvider : PXObservable <PXChangeObserver> {

	PXCPLActionManager* _actionManager;
	PXObservable*<PXCPLStatusProvider> _statusProvider;
	PXCPLUIStatus* _status;

}

@property (nonatomic,readonly) PXCPLUIStatus * status;              //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(PXCPLUIStatus *)status;
-(void)_updateStatus;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithActionManager:(id)arg1 ;
-(id)initWithActionManager:(id)arg1 statusProvider:(id)arg2 ;
-(void)_statusDidChange:(id)arg1 ;
@end

