/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreLocalSpeechRecognizer : NSObject <AFSpeechServiceDelegate> {
    NSString * _currentLanguage;
    <SiriCoreLocalSpeechRecognizerDelegate> * _delegate;
    SiriCoreLocalSpeechDESRecord * _desRecord;
    NSXPCConnection * _esConnection;
    BOOL  _hasReceivedLocalSpeechRecognized;
    BOOL  _hasReceivedServerSpeechRecognized;
    BOOL  _hasRecognizedAnything;
    NSUUID * _instanceUUID;
    NSArray * _localPhrases;
    NSArray * _localUtterances;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _recognitionActive;
    NSError * _recognitionError;
    NSString * _refId;
    NSArray * _serverPhrases;
    NSArray * _serverUtterances;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SiriCoreLocalSpeechRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)speechProfileDataLastModifiedDataForLanguage:(id)arg1;

- (void).cxx_destruct;
- (void)_combineResultsWithCompletion:(id /* block */)arg1;
- (id)_connection;
- (void)_readProfileAndUserDataWithLanguage:(id)arg1 allowOverride:(BOOL)arg2 tryLastDESRecipe:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)_resetCombiner;
- (id)_service;
- (id)_serviceWithFunctionName:(id)arg1 errorHandler:(id /* block */)arg2;
- (void)_writeDESRecord;
- (void)addAudioPacket:(id)arg1;
- (void)combineWithLocalPhrases:(id)arg1 utterances:(id)arg2 completion:(id /* block */)arg3;
- (void)combineWithServerPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3 completion:(id /* block */)arg4;
- (void)createSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (void)disableDESWithCompletion:(id /* block */)arg1;
- (void)fetchAssetsForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)finishAudio;
- (void)getOfflineDictationStatusWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 instanceUUID:(id)arg2;
- (void)invalidate;
- (void)runAdaptationRecipeEvaluation:(id)arg1 localSpeechDESRecord:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)speechServiceDidFinishRecognitionWithError:(id)arg1;
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
- (oneway void)speechServiceDidRecognizePhrases:(id)arg1 utterances:(id)arg2;
- (oneway void)speechServiceDidRecognizeTokens:(id)arg1;
- (void)startSpeechRecognitionWithLanguage:(id)arg1 task:(id)arg2 context:(id)arg3 narrowband:(BOOL)arg4 detectUtterances:(BOOL)arg5 maximumRecognitionDuration:(double)arg6 secureOfflineOnly:(BOOL)arg7 censorSpeech:(BOOL)arg8 didStartHandler:(id /* block */)arg9;
- (void)updateSpeechProfileWithLanguage:(id)arg1 userData:(id)arg2 localSpeechDESRecord:(id)arg3 completion:(id /* block */)arg4;

@end
