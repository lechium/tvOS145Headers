/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSITableDelegate;
@interface PSITable : NSObject {

	BOOL _finalizzeWasCalled;
	id<PSITableDelegate> _delegate;

}

@property (__weak,readonly) id<PSITableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<PSITableDelegate>)delegate;
-(void)clear;
-(void)finalizze;
-(id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3 ;
@end
