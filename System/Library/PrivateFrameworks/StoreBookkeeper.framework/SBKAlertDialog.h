/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SBKAlertDialog : NSObject {

	NSString* _title;
	NSString* _message;
	NSString* _cancelButtonTitle;
	/*^block*/id _completionHandler;
	NSString* _acceptButtonTitle;

}

@property (copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (copy) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (copy) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (copy) NSString * acceptButtonTitle;              //@synthesize acceptButtonTitle=_acceptButtonTitle - In the implementation block
@property (copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(NSString *)acceptButtonTitle;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)cancelButtonTitle;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(void)setAcceptButtonTitle:(NSString *)arg1 ;
-(BOOL)_runAsUIAlertView;
-(void)_runAsCFUserNotificationDisplayAlert;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 acceptButtonTitle:(id)arg4 ;
@end

