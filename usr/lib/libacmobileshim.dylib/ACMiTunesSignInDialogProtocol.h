/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol ACMiTunesSignInDialogProtocol <ACMSignInDialogProtocol>
@property (assign,nonatomic) BOOL isUserNameEditable; 
@property (nonatomic,retain) NSString * alertViewPrompt; 
@required
-(NSString *)alertViewPrompt;
-(void)setAlertViewPrompt:(id)arg1;
-(BOOL)isUserNameEditable;
-(void)setIsUserNameEditable:(BOOL)arg1;

@end

