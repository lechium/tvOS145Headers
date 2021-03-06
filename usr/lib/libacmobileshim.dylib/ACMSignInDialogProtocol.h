/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol ACMSignInDialogProtocol <NSObject>
@property (assign) id<ACMSignInDialogDelegate> delegate; 
@property (nonatomic,retain) NSString * requestedUserName; 
@property (readonly) NSString * userNameString; 
@property (assign) NSString * passwordString; 
@required
-(id<ACMSignInDialogDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(NSString *)userNameString;
-(NSString *)requestedUserName;
-(void)disableControls:(BOOL)arg1;
-(NSString *)passwordString;
-(void)setPasswordString:(id)arg1;
-(void)setRequestedUserName:(id)arg1;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

