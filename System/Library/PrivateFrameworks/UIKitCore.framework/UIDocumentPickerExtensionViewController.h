/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UIDocumentPickerExtensionViewController.h>

@class NSURL, NSArray, NSString;

@interface UIDocumentPickerExtensionViewController : UIViewController <_UIDocumentPickerExtensionViewController> {

	unsigned long long _documentPickerMode;
	NSURL* _originalURL;
	NSArray* _validTypes;
	NSString* _providerIdentifier;
	NSURL* _documentStorageURL;

}

@property (setter=_setUploadURL:,nonatomic,copy) NSURL * originalURL;                                   //@synthesize originalURL=_originalURL - In the implementation block
@property (setter=_setPickableTypes:,nonatomic,copy) NSArray * validTypes;                              //@synthesize validTypes=_validTypes - In the implementation block
@property (setter=_setProviderIdentifier:,nonatomic,copy) NSString * providerIdentifier;                //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (setter=_setDocumentStorageURL:,nonatomic,copy) NSURL * documentStorageURL;                   //@synthesize documentStorageURL=_documentStorageURL - In the implementation block
@property (assign,setter=_setPickerMode:,nonatomic) unsigned long long documentPickerMode;              //@synthesize documentPickerMode=_documentPickerMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(NSString *)providerIdentifier;
-(NSURL *)originalURL;
-(void)_setProviderIdentifier:(id)arg1 ;
-(void)_setTintColor:(id)arg1 ;
-(NSURL *)documentStorageURL;
-(unsigned long long)documentPickerMode;
-(void)_setPickableTypes:(id)arg1 ;
-(void)_setPickerMode:(unsigned long long)arg1 ;
-(void)_setUploadURLWrapper:(id)arg1 ;
-(void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_documentPickerDidDismiss;
-(void)_setUploadURL:(id)arg1 ;
-(void)_setDocumentStorageURL:(id)arg1 ;
-(void)prepareForPresentationInMode:(unsigned long long)arg1 ;
-(void)dismissGrantingAccessToURL:(id)arg1 ;
-(void)prepareForDocumentSelectionInMode:(unsigned long long)arg1 ;
-(NSArray *)validTypes;
@end

