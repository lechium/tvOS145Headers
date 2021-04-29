/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextToSpeechBundleSupport/TextToSpeechBundleSupport-Structs.h>
@class TTSSpeechServerInstance, TTSSpeechRequest, NSArray, TTSVoiceResourceAsset;

@interface ServerSpeechRequest : NSObject {

	TTSSpeechServerInstance* clientServer;
	TTSSpeechRequest* clientRequest;
	CFStringRef text;
	CFAttributedStringRef attributedText;
	CFURLRef outputPathURL;
	char* voiceName;
	long long footprint;
	long long voiceType;
	long long gender;
	CFStringRef languageCode;
	unsigned char notifyMarkStart;
	unsigned char maintainInput;
	unsigned char supportsAccurateWordCallbacks;
	float rate;
	float pitch;
	float volume;
	unsigned char useSharedSession;
	unsigned audioSessionID;
	unsigned audioQueueFlags;
	NSArray* channels;
	TTSVoiceResourceAsset* voiceResource;
	NSArray* rulesetRangeAdjustments;
	/*^block*/id audioBufferCallback;
	unsigned char synthesizeSilently;

}
-(void)dealloc;
@end

