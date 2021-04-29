/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/_TVDigitEntryViewController.h>
#import <libobjc.A.dylib/_TVDigitEntryViewControllerDelegate.h>

@class NSString;

@interface TVLJSPINEntryControl : _TVDigitEntryViewController <_TVDigitEntryViewControllerDelegate> {

	/*^block*/id _submitBlock;
	/*^block*/id _cancelBlock;

}

@property (nonatomic,copy) id submitBlock;                          //@synthesize submitBlock=_submitBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                          //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(void)viewDidLoad;
-(void)digitEntryViewControllerDidCancel:(id)arg1 ;
-(void)digitEntryViewControllerDidFinish:(id)arg1 ;
-(id)submitBlock;
-(void)setSubmitBlock:(id)arg1 ;
-(id)initWithNumberOfDigits:(unsigned long long)arg1 userEditable:(BOOL)arg2 showsDigits:(BOOL)arg3 title:(id)arg4 prompt:(id)arg5 initialPINCode:(id)arg6 ;
@end

