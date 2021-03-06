/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMFeatureFlags : NSObject

@property (nonatomic,readonly) BOOL newConversationListEnabled; 
@property (nonatomic,readonly) BOOL conversationPinningEnabled; 
@property (nonatomic,readonly) BOOL conversationPinningOnboardingEnabled; 
@property (nonatomic,readonly) BOOL conversationPinningSyncEnabled; 
@property (nonatomic,readonly) BOOL conversationPinningMultiDragEnabled; 
@property (nonatomic,readonly) BOOL conversationPinningTouchdownDimEnabled; 
@property (nonatomic,readonly) BOOL conversationPinningUsesLastNameForDuplicatesEnabled; 
@property (nonatomic,readonly) BOOL avatarViewAllowsStaleRendering; 
@property (nonatomic,readonly) BOOL showAllInstalledMessageApps; 
@property (nonatomic,readonly) BOOL mentionsEnabled; 
@property (nonatomic,readonly) BOOL mentionsKeyboardSuggestionsEnabled; 
@property (nonatomic,readonly) BOOL macToolbarEnabled; 
@property (nonatomic,readonly) BOOL macApplicationMetricsGatheringEnabled; 
@property (nonatomic,readonly) BOOL messageSyncP2Enabled; 
@property (nonatomic,readonly) BOOL fullTranscriptLoggingEnabled; 
@property (nonatomic,readonly) BOOL micGroupPhotoEnabled; 
@property (nonatomic,readonly) BOOL businessBrandedNewCompose; 
@property (nonatomic,readonly) BOOL businessGreeting; 
+(id)sharedInstance;
-(BOOL)certifiedDeliveryEnabled;
-(BOOL)conversationPinningEnabled;
-(BOOL)mentionsEnabled;
-(BOOL)manuallyAckMessagesEnabled;
-(BOOL)messagesBlastdoorEnabled;
-(BOOL)groupPhotoEnabled;
-(BOOL)loadAllChatsProgressivelyEnabled;
-(BOOL)fixImagentPriorityInversion;
-(BOOL)messageAppFreezerEnabled;
-(BOOL)businessBrandedNewCompose;
-(BOOL)businessGreeting;
-(BOOL)fixIMTranscoderAgentPriorityInversion;
-(BOOL)fixIMDPersistenceAgentPriorityInversion;
-(BOOL)isGreenfieldEnabled;
-(BOOL)isGreenfieldBlastDoorEnabled;
-(BOOL)isImagePreviewBlastDoorEnabled;
-(BOOL)isAudioPreviewBlastDoorEnabled;
-(BOOL)isPassKitBlastDoorEnabled;
-(BOOL)newConversationListEnabled;
-(BOOL)conversationPinningOnboardingEnabled;
-(BOOL)conversationPinningSyncEnabled;
-(BOOL)conversationPinningUsesLastNameForDuplicatesEnabled;
-(BOOL)conversationPinningMultiDragEnabled;
-(BOOL)conversationPinningTouchdownDimEnabled;
-(BOOL)avatarViewAllowsStaleRendering;
-(BOOL)showAllInstalledMessageApps;
-(BOOL)mentionsKeyboardSuggestionsEnabled;
-(BOOL)macToolbarEnabled;
-(BOOL)macApplicationMetricsGatheringEnabled;
-(BOOL)messageSyncP2Enabled;
-(BOOL)fullTranscriptLoggingEnabled;
-(BOOL)micGroupPhotoEnabled;
@end

