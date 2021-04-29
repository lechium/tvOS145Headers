/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXFeedbackTapToRadarUtilities : NSObject
+(id)summaryDescription;
+(id)defaultDescription;
+(id)attachmentURLForDiagnosticDictionaries:(id)arg1 descriptionName:(id)arg2 ;
+(id)alertControllerWithPrivacyMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)internalReleaseAgreement;
+(void)presentTermsAndConditionsForUIViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)fileRadarWithTitle:(id)arg1 description:(id)arg2 classification:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keyword:(id)arg7 attachmentURLs:(id)arg8 includeSysDiagnose:(BOOL)arg9 completionHandler:(/*^block*/id)arg10 ;
+(void)fileRadarWithTitle:(id)arg1 description:(id)arg2 classification:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keyword:(id)arg7 screenshotURLs:(id)arg8 attachmentURLs:(id)arg9 includeSysDiagnose:(BOOL)arg10 includeInternalRelease:(BOOL)arg11 additionalExtensionIdentifiers:(id)arg12 completionHandler:(/*^block*/id)arg13 ;
+(id)captureScreenshot;
+(id)defaultTitlePrefix;
+(id)_tempDirectoryURL;
+(id)detailedDebugDescriptionFileForAsset:(id)arg1 ;
+(id)originalImageFileForAsset:(id)arg1 ;
@end

