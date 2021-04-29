/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@interface SCROBrailleDisplayInput : NSObject {

	BOOL _prepareToMemorizeNextKey;
	BOOL _requestPrepareToMemorizeNextKey;
	BOOL _memorizeNextKeyImmediately;
	BOOL _willMemorizeNow;
	BOOL _isQuiet;
	BOOL _newDown;
	BOOL _currentBrailleChordContainsSpacebar;
	BOOL _currentBrailleChordBeganWithSpacebar;
	BOOL _currentBrailleChordContainsNonSpacebarChordableKey;
	BOOL _spacebarIsDown;
	BOOL _skipBrailleKeyboardKeyTranslation;
	unsigned _routerEvent;
	unsigned _currentHIDCommand;
	unsigned _currentBrailleModifiers;
	unsigned _downBrailleModifiers;
	double _quietSince;
	double _busySince;
	double _nextWillMemorizeNotificationTime;
	double _memorizeNextKeyImmediatelyTimeout;
	CFArrayRef _currentChord;
	CFSetRef _downKeys;
	double _lastBrailleChordTypingTime;
	CFArrayRef _currentBrailleChord;
	CFSetRef _downBrailleDots;
	double _lastBrailleChordPosted;
	double _brailleCharExponentialMovingAverage;
	double _brailleTranslationTimeout;

}

@property (assign,nonatomic) double quietSince;                                                    //@synthesize quietSince=_quietSince - In the implementation block
@property (assign,nonatomic) double busySince;                                                     //@synthesize busySince=_busySince - In the implementation block
@property (assign,nonatomic) double nextWillMemorizeNotificationTime;                              //@synthesize nextWillMemorizeNotificationTime=_nextWillMemorizeNotificationTime - In the implementation block
@property (assign,nonatomic) double memorizeNextKeyImmediatelyTimeout;                             //@synthesize memorizeNextKeyImmediatelyTimeout=_memorizeNextKeyImmediatelyTimeout - In the implementation block
@property (assign,nonatomic) BOOL prepareToMemorizeNextKey;                                        //@synthesize prepareToMemorizeNextKey=_prepareToMemorizeNextKey - In the implementation block
@property (assign,nonatomic) BOOL requestPrepareToMemorizeNextKey;                                 //@synthesize requestPrepareToMemorizeNextKey=_requestPrepareToMemorizeNextKey - In the implementation block
@property (assign,nonatomic) BOOL memorizeNextKeyImmediately;                                      //@synthesize memorizeNextKeyImmediately=_memorizeNextKeyImmediately - In the implementation block
@property (assign,nonatomic) BOOL willMemorizeNow;                                                 //@synthesize willMemorizeNow=_willMemorizeNow - In the implementation block
@property (assign,nonatomic) BOOL isQuiet;                                                         //@synthesize isQuiet=_isQuiet - In the implementation block
@property (assign,nonatomic) BOOL newDown;                                                         //@synthesize newDown=_newDown - In the implementation block
@property (assign,nonatomic) CFArrayRef currentChord;                                              //@synthesize currentChord=_currentChord - In the implementation block
@property (assign,nonatomic) CFSetRef downKeys;                                                    //@synthesize downKeys=_downKeys - In the implementation block
@property (assign,nonatomic) unsigned routerEvent;                                                 //@synthesize routerEvent=_routerEvent - In the implementation block
@property (assign,nonatomic) BOOL currentBrailleChordContainsSpacebar;                             //@synthesize currentBrailleChordContainsSpacebar=_currentBrailleChordContainsSpacebar - In the implementation block
@property (assign,nonatomic) BOOL currentBrailleChordBeganWithSpacebar;                            //@synthesize currentBrailleChordBeganWithSpacebar=_currentBrailleChordBeganWithSpacebar - In the implementation block
@property (assign,nonatomic) BOOL currentBrailleChordContainsNonSpacebarChordableKey;              //@synthesize currentBrailleChordContainsNonSpacebarChordableKey=_currentBrailleChordContainsNonSpacebarChordableKey - In the implementation block
@property (assign,nonatomic) BOOL spacebarIsDown;                                                  //@synthesize spacebarIsDown=_spacebarIsDown - In the implementation block
@property (assign,nonatomic) BOOL skipBrailleKeyboardKeyTranslation;                               //@synthesize skipBrailleKeyboardKeyTranslation=_skipBrailleKeyboardKeyTranslation - In the implementation block
@property (assign,nonatomic) double lastBrailleChordTypingTime;                                    //@synthesize lastBrailleChordTypingTime=_lastBrailleChordTypingTime - In the implementation block
@property (assign,nonatomic) CFArrayRef currentBrailleChord;                                       //@synthesize currentBrailleChord=_currentBrailleChord - In the implementation block
@property (assign,nonatomic) CFSetRef downBrailleDots;                                             //@synthesize downBrailleDots=_downBrailleDots - In the implementation block
@property (assign,nonatomic) unsigned currentHIDCommand;                                           //@synthesize currentHIDCommand=_currentHIDCommand - In the implementation block
@property (assign,nonatomic) unsigned currentBrailleModifiers;                                     //@synthesize currentBrailleModifiers=_currentBrailleModifiers - In the implementation block
@property (assign,nonatomic) unsigned downBrailleModifiers;                                        //@synthesize downBrailleModifiers=_downBrailleModifiers - In the implementation block
@property (assign,nonatomic) double lastBrailleChordPosted;                                        //@synthesize lastBrailleChordPosted=_lastBrailleChordPosted - In the implementation block
@property (assign,nonatomic) double brailleCharExponentialMovingAverage;                           //@synthesize brailleCharExponentialMovingAverage=_brailleCharExponentialMovingAverage - In the implementation block
@property (assign,nonatomic) double brailleTranslationTimeout;                                     //@synthesize brailleTranslationTimeout=_brailleTranslationTimeout - In the implementation block
-(void)dealloc;
-(double)quietSince;
-(void)setQuietSince:(double)arg1 ;
-(double)busySince;
-(void)setBusySince:(double)arg1 ;
-(double)nextWillMemorizeNotificationTime;
-(void)setNextWillMemorizeNotificationTime:(double)arg1 ;
-(double)memorizeNextKeyImmediatelyTimeout;
-(void)setMemorizeNextKeyImmediatelyTimeout:(double)arg1 ;
-(BOOL)prepareToMemorizeNextKey;
-(void)setPrepareToMemorizeNextKey:(BOOL)arg1 ;
-(BOOL)requestPrepareToMemorizeNextKey;
-(void)setRequestPrepareToMemorizeNextKey:(BOOL)arg1 ;
-(BOOL)memorizeNextKeyImmediately;
-(void)setMemorizeNextKeyImmediately:(BOOL)arg1 ;
-(BOOL)willMemorizeNow;
-(void)setWillMemorizeNow:(BOOL)arg1 ;
-(BOOL)isQuiet;
-(void)setIsQuiet:(BOOL)arg1 ;
-(BOOL)newDown;
-(void)setNewDown:(BOOL)arg1 ;
-(CFArrayRef)currentChord;
-(void)setCurrentChord:(CFArrayRef)arg1 ;
-(CFSetRef)downKeys;
-(void)setDownKeys:(CFSetRef)arg1 ;
-(unsigned)routerEvent;
-(void)setRouterEvent:(unsigned)arg1 ;
-(BOOL)currentBrailleChordContainsSpacebar;
-(void)setCurrentBrailleChordContainsSpacebar:(BOOL)arg1 ;
-(BOOL)currentBrailleChordBeganWithSpacebar;
-(void)setCurrentBrailleChordBeganWithSpacebar:(BOOL)arg1 ;
-(BOOL)currentBrailleChordContainsNonSpacebarChordableKey;
-(void)setCurrentBrailleChordContainsNonSpacebarChordableKey:(BOOL)arg1 ;
-(BOOL)spacebarIsDown;
-(void)setSpacebarIsDown:(BOOL)arg1 ;
-(BOOL)skipBrailleKeyboardKeyTranslation;
-(void)setSkipBrailleKeyboardKeyTranslation:(BOOL)arg1 ;
-(double)lastBrailleChordTypingTime;
-(void)setLastBrailleChordTypingTime:(double)arg1 ;
-(CFArrayRef)currentBrailleChord;
-(void)setCurrentBrailleChord:(CFArrayRef)arg1 ;
-(CFSetRef)downBrailleDots;
-(void)setDownBrailleDots:(CFSetRef)arg1 ;
-(unsigned)currentHIDCommand;
-(void)setCurrentHIDCommand:(unsigned)arg1 ;
-(unsigned)currentBrailleModifiers;
-(void)setCurrentBrailleModifiers:(unsigned)arg1 ;
-(unsigned)downBrailleModifiers;
-(void)setDownBrailleModifiers:(unsigned)arg1 ;
-(double)lastBrailleChordPosted;
-(void)setLastBrailleChordPosted:(double)arg1 ;
-(double)brailleCharExponentialMovingAverage;
-(void)setBrailleCharExponentialMovingAverage:(double)arg1 ;
-(double)brailleTranslationTimeout;
-(void)setBrailleTranslationTimeout:(double)arg1 ;
@end

