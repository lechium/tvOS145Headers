/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SUICVoiceSelectionDataProviderObserving.h>
#import <libobjc.A.dylib/SUICVoiceSelectionEventHandling.h>
#import <libobjc.A.dylib/SUICVoiceSelectionViewModelProviding.h>
#import <libobjc.A.dylib/SUICVoicePreviewingDelegate.h>

@protocol SUICVoiceSelectionDataManaging, SUICVoiceSelectionDisplaying, SUICVoicePreviewing, SUICVoiceSelectionPresenterDelegate;
@class SUICVoiceSelectionViewModel, AFVoiceInfo, SUICVoiceSelectionVoiceCollection, NSString;

@interface SUICVoiceSelectionPresenter : NSObject <SUICVoiceSelectionDataProviderObserving, SUICVoiceSelectionEventHandling, SUICVoiceSelectionViewModelProviding, SUICVoicePreviewingDelegate> {

	AFVoiceInfo* _voiceBeingPreviewed;
	BOOL _reverseVoiceOrder;
	id<SUICVoiceSelectionDataManaging> _dataManager;
	SUICVoiceSelectionVoiceCollection* _voiceCollection;
	id<SUICVoiceSelectionDisplaying> _view;
	id<SUICVoicePreviewing> _voicePreviewer;
	id<SUICVoiceSelectionPresenterDelegate> _delegate;

}

@property (nonatomic,readonly) id<SUICVoiceSelectionDataManaging> dataManager;                          //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,copy,readonly) SUICVoiceSelectionVoiceCollection * voiceCollection;                //@synthesize voiceCollection=_voiceCollection - In the implementation block
@property (nonatomic,readonly) id<SUICVoiceSelectionDisplaying> view;                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) id<SUICVoicePreviewing> voicePreviewer;                                  //@synthesize voicePreviewer=_voicePreviewer - In the implementation block
@property (nonatomic,__weak,readonly) id<SUICVoiceSelectionPresenterDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) SUICVoiceSelectionViewModel * voiceSelectionViewModel; 
-(id<SUICVoiceSelectionPresenterDelegate>)delegate;
-(id<SUICVoiceSelectionDisplaying>)view;
-(void)stopVoicePreview;
-(id<SUICVoiceSelectionDataManaging>)dataManager;
-(void)voicePreviewerAudioOutputDidChangePowerLevel:(float)arg1 ;
-(void)voiceSelectionDataProviderVoiceCollectionDidChange:(id)arg1 ;
-(void)_determineVoiceOrdering;
-(void)_processVoiceSelection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_previewVoice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_logVoicePreview:(id)arg1 ;
-(id)_voiceCollection;
-(id)_localizedDisplayNameForLanguageCode:(id)arg1 ;
-(void)voiceSelectionView:(id)arg1 receivedRequestToSelectVoice:(id)arg2 ;
-(void)voiceSelectionView:(id)arg1 receivedRequestToSelectLanguage:(id)arg2 ;
-(SUICVoiceSelectionViewModel *)voiceSelectionViewModel;
-(id)initWithDataManaging:(id)arg1 view:(id)arg2 delegate:(id)arg3 voicePreviewing:(id)arg4 recognitionLanguage:(id)arg5 ;
-(void)selectRandomVoiceWithCompletion:(/*^block*/id)arg1 ;
-(SUICVoiceSelectionVoiceCollection *)voiceCollection;
-(id<SUICVoicePreviewing>)voicePreviewer;
@end

