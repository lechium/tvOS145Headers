/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VSViewServiceRemoteViewControllerDelegate <NSObject>
@required
-(void)presentViewServiceRemoteViewController:(id)arg1;
-(void)dismissViewServiceRemoteViewController:(id)arg1;
-(void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
-(void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
-(void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
-(void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
-(void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;
-(void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(/*^block*/id)arg3;

@end
