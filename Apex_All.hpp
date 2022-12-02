                                                      /* Create by #FF69B4 */
class Miscellaneous
{
	int                                                cl_entitylist;                                            // 0x1B0E678(0x00x4)
	int                                                LocalPlayer;                                              // 0x1EBF488(0x00x4)
	int                                                NameList;                                                 // 0xBC1C040(0x00x4)
	int                                                ViewRender;                                               // 0x7641830(0x00x4)
	int                                                StudioHdr;                                                // 0x10F0(0x00x4)
};

//class DataMap.C_BaseAnimating
class C_BaseAnimating
{
	float                                              m_currentFrame.animCycle;                                 // 0x00C4(0x0004)
	int                                                m_animNetworkFlags;                                       // 0x0A88(0x0004)
	bool                                               m_networkAnimActive;                                      // 0x0A8C(0x0001)
	bool                                               m_animActive;                                             // 0x0A8E(0x0001)
	bool                                               m_animCollisionEnabled;                                   // 0x0A8F(0x0001)
	bool                                               m_animRelativeToGroundEnabled;                            // 0x0A90(0x0001)
	bool                                               m_animPlantingEnabled;                                    // 0x0A91(0x0001)
	struct Embedded                                    m_predictedAnimEventData;                                 // 0x0B88(0x0000)
	struct Embedded                                    m_SequenceTransitioner;                                   // 0x0C20(0x0000)
	int                                                m_nSkin;                                                  // 0x0E50(0x0004)
	short                                              m_skinMod;                                                // 0x0E54(0x0002)
	int                                                m_nBody;                                                  // 0x0E58(0x0004)
	int                                                m_camoIndex;                                              // 0x0E5C(0x0004)
	struct Time                                        m_nResetEventsStartTime;                                  // 0x0E64(0x0004)
	int                                                m_nResetEventsParity;                                     // 0x0E68(0x0004)
	bool                                               m_bSequenceFinished;                                      // 0x0EFC(0x0001)
	bool                                               m_bSequenceLooped;                                        // 0x0F04(0x0001)
	bool                                               m_bSequenceLoops;                                         // 0x0F05(0x0001)
	bool                                               m_bSequenceReadyForBreakout;                              // 0x0F06(0x0001)
	float                                              m_flModelScale;                                           // 0x0F08(0x0004)
	float                                              m_currentFrameBaseAnimating.animStartTime;                // 0x0F14(0x0004)
	float                                              m_currentFrameBaseAnimating.animStartCycle;               // 0x0F18(0x0004)
	float                                              m_currentFrameBaseAnimating.animPlaybackRate;             // 0x0F1C(0x0004)
	int                                                m_currentFrameBaseAnimating.animModelIndex;               // 0x0F20(0x0004)
	int                                                m_currentFrameBaseAnimating.animSequenceParity;           // 0x0F24(0x0004)
	int                                                m_currentFrameBaseAnimating.animSequence;                 // 0x0F2C(0x0002)
	float                                              m_currentFrameBaseAnimating.m_flPoseParameters;           // 0x0F3C(0x0060)
};

//class DataMap.C_ClientRagdoll
class C_ClientRagdoll
{
	struct Color32                                     m_clrRender;                                              // 0x0050(0x0004)
	char                                               m_nRenderFX;                                              // 0x04AD(0x0001)
	char                                               m_nRenderMode;                                            // 0x04B9(0x0001)
	struct Embedded                                    m_pRagdoll;                                               // 0x0BE8(0x0008)
	int                                                m_nSkin;                                                  // 0x0E50(0x0004)
	short                                              m_skinMod;                                                // 0x0E54(0x0002)
	int                                                m_nBody;                                                  // 0x0E58(0x0004)
	bool                                               m_bFadeOut;                                               // 0x1640(0x0001)
	bool                                               m_bImportant;                                             // 0x1641(0x0001)
	struct Time                                        m_flEffectTime;                                           // 0x1644(0x0004)
	int                                                m_iCurrentFriction;                                       // 0x1648(0x0004)
	int                                                m_iMinFriction;                                           // 0x164C(0x0004)
	int                                                m_iMaxFriction;                                           // 0x1650(0x0004)
	float                                              m_flFrictionModTime;                                      // 0x1654(0x0004)
	struct Time                                        m_flFrictionTime;                                         // 0x1658(0x0004)
	int                                                m_iFrictionAnimState;                                     // 0x165C(0x0004)
	bool                                               m_bReleaseRagdoll;                                        // 0x1660(0x0001)
	bool                                               m_bFadingOut;                                             // 0x1661(0x0001)
	float                                              m_flScaleEnd;                                             // 0x1664(0x0028)
	float                                              m_flScaleTimeStart;                                       // 0x168C(0x0028)
	float                                              m_flScaleTimeEnd;                                         // 0x16B4(0x0028)
};

//class DataMap.C_Player
class C_Player
{
	int                                                m_fFlags;                                                 // 0x0098(0x0004)
	float                                              m_currentFrame.animCycle;                                 // 0x00C4(0x0004)
	struct EHANDLE                                     m_pMoveParent;                                            // 0x0118(0x0004)
	struct Vector                                      m_vecAbsVelocity;                                         // 0x0140(0x000C)
	struct EHANDLE                                     m_hGroundEntity;                                          // 0x0438(0x0004)
	int                                                m_flMaxspeed;                                             // 0x0440(0x0004)
	struct Time                                        m_jumpPadDebounceExpireTime;                              // 0x0464(0x0004)
	struct Vector                                      m_vecVelocity;                                            // 0x0488(0x000C)
	float                                              m_flFriction;                                             // 0x04A0(0x0004)
	int                                                m_nNextThinkTick;                                         // 0x0574(0x0004)
	struct Embedded                                    m_SequenceTransitioner;                                   // 0x0C20(0x0000)
	float                                              m_currentFrameBaseAnimating.animStartTime;                // 0x0F14(0x0004)
	float                                              m_currentFrameBaseAnimating.animStartCycle;               // 0x0F18(0x0004)
	float                                              m_currentFrameBaseAnimating.animPlaybackRate;             // 0x0F1C(0x0004)
	int                                                m_currentFrameBaseAnimating.animSequenceParity;           // 0x0F24(0x0004)
	int                                                m_currentFrameBaseAnimating.animSequence;                 // 0x0F2C(0x0002)
	float                                              m_currentFrameBaseAnimating.m_flPoseParameters;           // 0x0F3C(0x0060)
	bool                                               m_bZooming;                                               // 0x1C31(0x0001)
	struct Time                                        m_zoomToggleOnStartTime;                                  // 0x1C34(0x0004)
	float                                              m_zoomBaseFrac;                                           // 0x1C38(0x0004)
	struct Time                                        m_zoomBaseTime;                                           // 0x1C3C(0x0004)
	struct Time                                        m_zoomFullStartTime;                                      // 0x1C40(0x0004)
	int                                                m_lastUCmdSimulationTicks;                                // 0x1CB4(0x0004)
	float                                              m_lastUCmdSimulationRemainderTime;                        // 0x1CB8(0x0004)
	struct Embedded                                    m_Local;                                                  // 0x1DF0(0x0000)
	float                                              m_currentFramePlayer.timeBase;                            // 0x20D8(0x0004)
	struct Embedded                                    m_currentFramePlayer.statusEffectsTimedPlayerCUR;         // 0x20E0(0x0000)
	struct Embedded                                    m_currentFramePlayer.statusEffectsEndlessPlayerCUR;       // 0x21D0(0x0000)
	float                                              m_currentFramePlayer.m_flHullHeight;                      // 0x2270(0x0004)
	float                                              m_currentFramePlayer.m_traversalAnimProgress;             // 0x2274(0x0004)
	float                                              m_currentFramePlayer.m_sprintTiltFrac;                    // 0x2278(0x0004)
	float                                              m_currentFramePlayer.m_ziprailBankTiltFrac;               // 0x227C(0x0004)
	int                                                m_currentFramePlayer.m_ammoPoolCount;                     // 0x228C(0x0020)
	struct Vector                                      m_currentFrameLocalPlayer.m_stepSmoothingOffset;          // 0x2460(0x000C)
	int                                                m_currentFrameLocalPlayer.m_duckTransitionRemainderMsec;  // 0x246C(0x0004)
	struct Vector                                      m_currentFrameLocalPlayer.m_vecPunchBase_Angle;           // 0x2470(0x000C)
	struct Vector                                      m_currentFrameLocalPlayer.m_vecPunchBase_AngleVel;        // 0x247C(0x000C)
	struct Vector                                      m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle;         // 0x2488(0x000C)
	float                                              m_currentFrameLocalPlayer.m_vecPunchWeapon_AngleVel.x;    // 0x2494(0x0004)
	float                                              m_currentFrameLocalPlayer.m_vecPunchWeapon_AngleVel.y;    // 0x2498(0x0004)
	float                                              m_currentFrameLocalPlayer.m_vecPunchWeapon_AngleVel.z;    // 0x249C(0x0004)
	struct Quaternion                                  m_currentFrameLocalPlayer.m_localGravityRotation;         // 0x24D8(0x0010)
	struct Embedded                                    pl;                                                       // 0x2500(0x0000)
	int                                                m_ammoPoolCapacity;                                       // 0x2584(0x0004)
	struct unknow                                      m_classModsActive;                                        // 0x25C0(0x0008)
	short                                              m_gestureSequences;                                       // 0x28CC(0x0010)
	struct Time                                        m_gestureStartTimes;                                      // 0x28DC(0x0020)
	float                                              m_gestureBlendInDuration;                                 // 0x28FC(0x0020)
	float                                              m_gestureBlendOutDuration;                                // 0x291C(0x0020)
	struct Time                                        m_gestureFadeOutStartTime;                                // 0x293C(0x0020)
	float                                              m_gestureFadeOutDuration;                                 // 0x295C(0x0020)
	int                                                m_gestureAutoKillBitfield;                                // 0x297C(0x0004)
	int                                                m_afButtonLast;                                           // 0x2998(0x0004)
	int                                                m_afButtonPressed;                                        // 0x299C(0x0004)
	int                                                m_afButtonReleased;                                       // 0x29A0(0x0004)
	int                                                m_nButtons;                                               // 0x29A4(0x0004)
	int                                                m_nImpulse;                                               // 0x29A8(0x0004)
	int                                                m_flPhysics;                                              // 0x29AC(0x0004)
	float                                              m_flStepSoundTime;                                        // 0x29B0(0x0004)
	float                                              m_flTimeAllSuitDevicesOff;                                // 0x29B4(0x0004)
	float                                              m_fStickySprintMinTime;                                   // 0x29B8(0x0004)
	bool                                               m_bPlayedSprintStartEffects;                              // 0x29BC(0x0001)
	bool                                               m_fIsSprinting;                                           // 0x29C4(0x0001)
	bool                                               m_fIsWalking;                                             // 0x29C5(0x0001)
	struct Time                                        m_lastSprintPressTime;                                    // 0x29D4(0x0004)
	struct Time                                        m_stickySprintForwardEnableTime;                          // 0x29D8(0x0004)
	struct Time                                        m_stickySprintForwardDisableTime;                         // 0x29DC(0x0004)
	struct Time                                        m_sprintStartedTime;                                      // 0x29E0(0x0004)
	float                                              m_sprintStartedFrac;                                      // 0x29E4(0x0004)
	struct Time                                        m_sprintEndedTime;                                        // 0x29E8(0x0004)
	float                                              m_sprintEndedFrac;                                        // 0x29EC(0x0004)
	struct Time                                        m_stickySprintStartTime;                                  // 0x29F0(0x0004)
	struct Time                                        m_damageImpulseNoDecelEndTime;                            // 0x29F4(0x0004)
	int                                                m_duckState;                                              // 0x2A14(0x0004)
	int                                                m_leanState;                                              // 0x2A18(0x0004)
	bool                                               m_doingHalfDuck;                                          // 0x2A1C(0x0001)
	bool                                               m_canStand;                                               // 0x2A1D(0x0001)
	struct Vector                                      m_StandHullMin;                                           // 0x2A20(0x000C)
	struct Vector                                      m_StandHullMax;                                           // 0x2A2C(0x000C)
	struct Vector                                      m_DuckHullMin;                                            // 0x2A38(0x000C)
	struct Vector                                      m_DuckHullMax;                                            // 0x2A44(0x000C)
	struct Vector                                      m_upDir;                                                  // 0x2A54(0x000C)
	struct Vector                                      m_upDirPredicted;                                         // 0x2A60(0x000C)
	struct Vector                                      m_lastWallRunStartPos;                                    // 0x2A6C(0x000C)
	int                                                m_wallRunCount;                                           // 0x2A78(0x0004)
	bool                                               m_wallRunWeak;                                            // 0x2A7C(0x0001)
	bool                                               m_shouldBeOneHanded;                                      // 0x2A7D(0x0001)
	float                                              m_oneHandFraction;                                        // 0x2A80(0x0004)
	float                                              m_animAimPitch;                                           // 0x2A84(0x0004)
	float                                              m_animAimYaw;                                             // 0x2A88(0x0004)
	float                                              m_wallRunPushAwayTime;                                    // 0x2A98(0x0004)
	struct Time                                        m_wallrunRetryTime;                                       // 0x2AA4(0x0004)
	struct Vector                                      m_wallrunRetryPos;                                        // 0x2AA8(0x000C)
	struct Vector                                      m_wallrunRetryNormal;                                     // 0x2AB4(0x000C)
	float                                              m_wallHangTime;                                           // 0x2AD8(0x0004)
	int                                                m_traversalState;                                         // 0x2ADC(0x0004)
	int                                                m_traversalType;                                          // 0x2AE0(0x0004)
	struct Vector                                      m_traversalBegin;                                         // 0x2AE4(0x000C)
	struct Vector                                      m_traversalMid;                                           // 0x2AF0(0x000C)
	struct Vector                                      m_traversalEnd;                                           // 0x2AFC(0x000C)
	float                                              m_traversalMidFrac;                                       // 0x2B08(0x0004)
	struct Vector                                      m_traversalForwardDir;                                    // 0x2B0C(0x000C)
	struct Vector                                      m_traversalRefPos;                                        // 0x2B18(0x000C)
	float                                              m_traversalProgress;                                      // 0x2B24(0x0004)
	struct Time                                        m_traversalStartTime;                                     // 0x2B28(0x0004)
	struct Time                                        m_traversalHandAppearTime;                                // 0x2B2C(0x0004)
	struct Time                                        m_traversalReleaseTime;                                   // 0x2B30(0x0004)
	struct Time                                        m_traversalBlendOutStartTime;                             // 0x2B34(0x0004)
	struct Vector                                      m_traversalBlendOutStartOffset;                           // 0x2B38(0x000C)
	float                                              m_traversalYawDelta;                                      // 0x2B44(0x0004)
	struct Time                                        m_wallDangleJumpOffTime;                                  // 0x2B50(0x0004)
	bool                                               m_wallDangleMayHangHere;                                  // 0x2B54(0x0001)
	bool                                               m_wallDangleForceFallOff;                                 // 0x2B55(0x0001)
	bool                                               m_wallDangleLastPushedForward;                            // 0x2B56(0x0001)
	int                                                m_wallDangleDisableWeapon;                                // 0x2B58(0x0004)
	float                                              m_wallDangleClimbProgressFloor;                           // 0x2B5C(0x0004)
	bool                                               m_wallClimbSetUp;                                         // 0x2B60(0x0001)
	bool                                               m_wallHanging;                                            // 0x2B61(0x0001)
	bool                                               m_gravityLiftActive;                                      // 0x2B62(0x0001)
	struct Time                                        m_gravityLiftEnterTime;                                   // 0x2B64(0x0004)
	struct Time                                        m_gravityLiftEjectTime;                                   // 0x2B68(0x0004)
	float                                              m_gravityLiftHoverTime;                                   // 0x2B6C(0x0004)
	struct Vector                                      m_gravityLiftLastOrigin;                                  // 0x2B70(0x000C)
	struct Vector                                      m_gravityLiftEjectVelocity;                               // 0x2B7C(0x000C)
	bool                                               m_blackholeActive;                                        // 0x2B88(0x0001)
	bool                                               m_jetDriveWasActive;                                      // 0x2B89(0x0001)
	bool                                               m_jetDriveActive;                                         // 0x2B8A(0x0001)
	struct Vector                                      m_jetDriveTargetPos;                                      // 0x2B8C(0x000C)
	struct EHANDLE                                     m_jetDriveTargetEnt;                                      // 0x2B98(0x0004)
	struct Vector                                      m_jetDriveTargetEntOffset;                                // 0x2B9C(0x000C)
	struct Vector                                      m_jetDriveStartPos;                                       // 0x2BA8(0x000C)
	struct Time                                        m_jetDriveStartTime;                                      // 0x2BB4(0x0004)
	float                                              m_jetDriveSpeed;                                          // 0x2BB8(0x0004)
	float                                              m_jetDriveAccel;                                          // 0x2BBC(0x0004)
	struct Time                                        m_jetDriveDecelWindowTimeOutTime;                         // 0x2BC0(0x0004)
	bool                                               m_jetDriveInDecelWindow;                                  // 0x2BC4(0x0001)
	float                                              m_jetDriveTimeout;                                        // 0x2BC8(0x0004)
	struct Vector                                      m_jetDriveDoubleJumpVelocity;                             // 0x2BCC(0x000C)
	struct Embedded                                    m_grapple;                                                // 0x2C60(0x0000)
	struct Embedded                                    m_grapple;                                                // 0x2C60(0x0000)
	bool                                               m_grappleActive;                                          // 0x2CF0(0x0001)
	bool                                               m_grappleActive;                                          // 0x2CF0(0x0001)
	bool                                               m_grappleNeedWindowCheck;                                 // 0x2CF1(0x0001)
	struct EHANDLE                                     m_grappleNextWindowHint;                                  // 0x2CF4(0x0004)
	bool                                               m_slowMoEnabled;                                          // 0x2D04(0x0001)
	bool                                               m_sliding;                                                // 0x2D05(0x0001)
	bool                                               m_slideLongJumpAllowed;                                   // 0x2D06(0x0001)
	struct Time                                        m_lastSlideTime;                                          // 0x2D08(0x0004)
	float                                              m_lastSlideBoost;                                         // 0x2D0C(0x0004)
	int                                                m_gravityGrenadeStatusEffect;                             // 0x2D10(0x0004)
	float                                              m_ziprailBankTiltVel;                                     // 0x2D14(0x0004)
	bool                                               m_bIsStickySprinting;                                     // 0x2D1A(0x0001)
	float                                              m_prevMoveYaw;                                            // 0x2D1C(0x0004)
	float                                              m_sprintTiltVel;                                          // 0x2D20(0x0004)
	struct EHANDLE                                     m_turret;                                                 // 0x2D34(0x0004)
	struct EHANDLE                                     m_hViewModels;                                            // 0x2D38(0x000C)
	struct Embedded                                    m_viewOffsetEntity;                                       // 0x2D48(0x0000)
	struct EHANDLE                                     m_activeZipline;                                          // 0x2E78(0x0004)
	struct EHANDLE                                     m_lastZipline;                                            // 0x2E7C(0x0004)
	struct Time                                        m_lastZiplineDetachTime;                                  // 0x2E80(0x0004)
	bool                                               m_ziplineValid3pWeaponLayerAnim;                          // 0x2E84(0x0001)
	int                                                m_ziplineState;                                           // 0x2E88(0x0004)
	struct Embedded                                    m_zipline;                                                // 0x2E90(0x0000)
	struct Vector                                      m_ziplineViewOffsetPosition;                              // 0x2F08(0x000C)
	struct Vector                                      m_ziplineViewOffsetVelocity;                              // 0x2F14(0x000C)
	struct EHANDLE                                     m_ziplineGrenadeEntity;                                   // 0x2F20(0x0004)
	struct EHANDLE                                     m_ziplineGrenadeBeginStationEntity;                       // 0x2F24(0x0004)
	char                                               m_ziplineGrenadeBeginStationAttachmentId;                 // 0x2F28(0x0001)
	float                                              m_ziplineReattachCooldownTime;                            // 0x2F30(0x0004)
	char                                               m_ziplineCooldownIndex;                                   // 0x2F34(0x0001)
	int                                                m_playAnimationType;                                      // 0x2F38(0x0004)
	bool                                               m_detachGrappleOnPlayAnimationEnd;                        // 0x2F3C(0x0001)
	int                                                m_playAnimationNext;                                      // 0x2F3E(0x0004)
	bool                                               m_boosting;                                               // 0x2F50(0x0001)
	bool                                               m_activateBoost;                                          // 0x2F51(0x0001)
	bool                                               m_repeatedBoost;                                          // 0x2F52(0x0001)
	float                                              m_boostMeter;                                             // 0x2F54(0x0004)
	bool                                               m_jetpack;                                                // 0x2F58(0x0001)
	bool                                               m_activateJetpack;                                        // 0x2F59(0x0001)
	bool                                               m_jetpackAfterburner;                                     // 0x2F5A(0x0001)
	bool                                               m_gliding;                                                // 0x2F5B(0x0001)
	float                                              m_glideMeter;                                             // 0x2F5C(0x0004)
	float                                              m_glideRechargeDelayAccumulator;                          // 0x2F60(0x0004)
	bool                                               m_hovering;                                               // 0x2F64(0x0001)
	bool                                               m_isPerformingBoostAction;                                // 0x2F65(0x0001)
	float                                              m_lastJumpHeight;                                         // 0x2F68(0x0004)
	struct EHANDLE                                     m_touchingUpdraftTriggers;                                // 0x2F6C(0x0040)
	int                                                m_touchingUpdraftTriggersCount;                           // 0x2FAC(0x0004)
	struct EHANDLE                                     m_touchingSlipTriggers;                                   // 0x2FB0(0x0040)
	int                                                m_touchingSlipTriggersCount;                              // 0x2FF0(0x0004)
	struct Vector                                      m_slipAirRestrictDirection;                               // 0x2FF4(0x000C)
	struct Time                                        m_slipAirRestrictTime;                                    // 0x3000(0x0004)
	struct Embedded                                    m_melee;                                                  // 0x3198(0x0000)
	bool                                               m_useCredit;                                              // 0x31D0(0x0001)
	struct Time                                        m_wallRunStartTime;                                       // 0x3574(0x0004)
	struct Time                                        m_wallRunClearTime;                                       // 0x3578(0x0004)
	float                                              m_onSlopeTime;                                            // 0x357C(0x0004)
	struct Vector                                      m_lastWallNormal;                                         // 0x3580(0x000C)
	bool                                               m_dodging;                                                // 0x358C(0x0001)
	struct Time                                        m_lastDodgeTime;                                          // 0x3590(0x0004)
	struct Vector                                      m_vecPreviouslyPredictedOrigin;                           // 0x35A8(0x000C)
	float                                              m_flTimeLastTouchedWall;                                  // 0x35B4(0x0004)
	struct Time                                        m_timeJetpackHeightActivateCheckPassed;                   // 0x35B8(0x0004)
	float                                              m_flTimeLastTouchedGround;                                // 0x35BC(0x0004)
	float                                              m_flTimeLastJumped;                                       // 0x35C0(0x0004)
	float                                              m_flTimeLastJumpGraceTap;                                 // 0x35C4(0x0004)
	float                                              m_flJumpGraceMultiTapFactor;                              // 0x35C8(0x0004)
	int                                                m_jumpGraceTapCount;                                      // 0x35CC(0x0004)
	float                                              m_flTimeLastLanded;                                       // 0x35D0(0x0004)
	float                                              m_flLastLandFromHeight;                                   // 0x35D4(0x0004)
	float                                              m_usePressedTime;                                         // 0x35D8(0x0004)
	float                                              m_lastUseTime;                                            // 0x35DC(0x0004)
	struct Vector                                      m_lastFakeFloorPos;                                       // 0x35EC(0x000C)
	bool                                               m_bHasJumpedSinceTouchedGround;                           // 0x35F8(0x0001)
	bool                                               m_bDoMultiJumpPenalty;                                    // 0x35F9(0x0001)
	bool                                               m_dodgingInAir;                                           // 0x35FA(0x0001)
	float                                              m_timeShouldTryGivePlayerDoubleJump;                      // 0x3638(0x0004)
	bool                                               m_activeViewmodelModifiers;                               // 0x3830(0x0035)
	struct Time                                        m_lastMoveInputTime;                                      // 0x3AC8(0x0004)
	struct EHANDLE                                     m_ignoreEntityForMovementUntilNotTouching;                // 0x3ACC(0x0004)
	float                                              m_gameMovementUtil.m_surfaceFriction;                     // 0x3F98(0x0004)
	struct EHANDLE                                     m_lungeTargetEntity;                                      // 0x4014(0x0004)
	bool                                               m_isLungingToPosition;                                    // 0x4018(0x0001)
	struct Vector                                      m_lungeTargetPosition;                                    // 0x401C(0x000C)
	struct Vector                                      m_lungeStartPositionOffset;                               // 0x4028(0x000C)
	struct Vector                                      m_lungeEndPositionOffset;                                 // 0x4034(0x000C)
	struct Time                                        m_lungeStartTime;                                         // 0x4040(0x0004)
	struct Time                                        m_lungeEndTime;                                           // 0x4044(0x0004)
	bool                                               m_lungeCanFly;                                            // 0x4048(0x0001)
	bool                                               m_lungeLockPitch;                                         // 0x4049(0x0001)
	float                                              m_lungeStartPitch;                                        // 0x404C(0x0004)
	float                                              m_lungeSmoothTime;                                        // 0x4050(0x0004)
	float                                              m_lungeMaxTime;                                           // 0x4054(0x0004)
	float                                              m_lungeMaxEndSpeed;                                       // 0x4058(0x0004)
	struct Vector                                      m_vPrevGroundNormal;                                      // 0x4314(0x000C)
	struct EHANDLE                                     m_prepClimbPusher;                                        // 0x45E4(0x0004)
	struct Vector                                      m_pushAwayFromTopAcceleration;                            // 0x45E8(0x000C)
	bool                                               m_controllerModeActive;                                   // 0x4614(0x0001)
	float                                              m_skydiveForwardPoseValueVelocity;                        // 0x462C(0x0004)
	float                                              m_skydiveForwardPoseValueTarget;                          // 0x4630(0x0004)
	float                                              m_skydiveForwardPoseValueCurrent;                         // 0x4634(0x0004)
	float                                              m_skydiveSidePoseValueVelocity;                           // 0x4638(0x0004)
	float                                              m_skydiveSidePoseValueTarget;                             // 0x463C(0x0004)
	float                                              m_skydiveSidePoseValueCurrent;                            // 0x4640(0x0004)
	float                                              m_skydiveYawVelocity;                                     // 0x4644(0x0004)
	bool                                               m_skydiveIsNearLeviathan;                                 // 0x4648(0x0001)
	int                                                m_skydiveState;                                           // 0x4664(0x0004)
	struct Time                                        m_skydiveStartTime;                                       // 0x4668(0x0004)
	struct Time                                        m_skydiveEndTime;                                         // 0x466C(0x0004)
	struct Time                                        m_skydiveAnticipateStartTime;                             // 0x4670(0x0004)
	struct Time                                        m_skydiveAnticipateEndTime;                               // 0x4674(0x0004)
	float                                              m_skydiveDistanceToLand;                                  // 0x4678(0x0004)
	float                                              m_skydiveDiveAngle;                                       // 0x467C(0x0004)
	bool                                               m_skydiveIsDiving;                                        // 0x4680(0x0001)
	float                                              m_skydiveSpeed;                                           // 0x4684(0x0004)
	float                                              m_skydiveStrafeAngle;                                     // 0x4688(0x0004)
	bool                                               m_skydiveFreelookEnabled;                                 // 0x468C(0x0001)
	struct Vector                                      m_skydiveFreelookLockedAngle;                             // 0x4690(0x000C)
	float                                              m_skydivePlayerPitch;                                     // 0x469C(0x0004)
	float                                              m_skydivePlayerYaw;                                       // 0x46A0(0x0004)
	bool                                               m_skydiveFollowing;                                       // 0x46A4(0x0001)
	struct Vector                                      m_skydiveUnfollowVelocity;                                // 0x46A8(0x000C)
	struct Vector                                      m_skydiveLeviathanHitPosition;                            // 0x46B8(0x000C)
	struct Vector                                      m_skydiveLeviathanHitNormal;                              // 0x46C4(0x000C)
	struct Vector                                      m_skydiveSlipVelocity;                                    // 0x46D0(0x000C)
	bool                                               m_skydiveFromUpdraft;                                     // 0x46DC(0x0001)
	bool                                               m_skydiveFromSkywardLaunch;                               // 0x46DD(0x0001)
	int                                                m_skywardLaunchState;                                     // 0x46E0(0x0004)
	struct Vector                                      m_skywardDeployStartPos;                                  // 0x46E8(0x000C)
	float                                              m_skywardLaunchSlowStartTime;                             // 0x46F4(0x0004)
	float                                              m_skywardLaunchSlowEndTime;                               // 0x46F8(0x0004)
	float                                              m_skywardLaunchFastEndTime;                               // 0x46FC(0x0004)
	float                                              m_skywardDeployEndTime;                                   // 0x4700(0x0004)
	float                                              m_skywardLaunchEndTime;                                   // 0x4704(0x0004)
	float                                              m_skywardDeploySpeed;                                     // 0x4708(0x0004)
	float                                              m_skywardLaunchSlowSpeed;                                 // 0x470C(0x0004)
	float                                              m_skywardLaunchFastSpeed;                                 // 0x4710(0x0004)
	struct Vector                                      m_skywardOffset;                                          // 0x4714(0x000C)
	float                                              m_skywardOffsetSpeed;                                     // 0x4720(0x0004)
	bool                                               m_skywardLaunchInterrupted;                               // 0x4724(0x0001)
	bool                                               m_skywardLaunchFollowing;                                 // 0x4725(0x0001)
	struct Vector                                      m_armoredLeapAirPos;                                      // 0x472C(0x000C)
	struct Vector                                      m_armoredLeapEndPos;                                      // 0x4738(0x000C)
	int                                                m_armoredLeapType;                                        // 0x4744(0x0004)
	int                                                m_armoredLeapPhase;                                       // 0x4748(0x0004)
	struct Time                                        m_armoredLeapStartTime;                                   // 0x474C(0x0004)
	int                                                m_dragReviveState;                                        // 0x47B8(0x0004)
	float                                              m_dragReviveOutroStartTime;                               // 0x47BC(0x0004)
	struct EHANDLE                                     m_reviveTarget;                                           // 0x47C0(0x0004)
	struct Embedded                                    m_playerKnockBacks;                                       // 0x47F0(0x0000)
	int                                                m_updraftCount;                                           // 0x4870(0x0004)
	int                                                m_updraftStage;                                           // 0x4874(0x0004)
	struct Time                                        m_updraftEnterTime;                                       // 0x4878(0x0004)
	struct Time                                        m_updraftLeaveTime;                                       // 0x487C(0x0004)
	float                                              m_updraftMinShakeActivationHeight;                        // 0x4880(0x0004)
	float                                              m_updraftMaxShakeActivationHeight;                        // 0x4884(0x0004)
	float                                              m_updraftLiftActivationHeight;                            // 0x4888(0x0004)
	float                                              m_updraftLiftSpeed;                                       // 0x488C(0x0004)
	float                                              m_updraftLiftAcceleration;                                // 0x4890(0x0004)
	float                                              m_updraftLiftExitDuration;                                // 0x4894(0x0004)
	struct Time                                        m_updraftSlowTime;                                        // 0x4898(0x0004)
};

//class DataMap.C_WindEmitter
class C_WindEmitter
{
	struct Vector                                      m_params.shapeParams;                                     // 0x0A60(0x000C)
	struct Vector                                      m_params.windDir;                                         // 0x0A6C(0x000C)
	float                                              m_params.windSpeed;                                       // 0x0A78(0x0004)
	int                                                m_params.shapeType;                                       // 0x0A7C(0x0004)
	bool                                               m_params.enabled;                                         // 0x0A80(0x0001)
};

//class DataMap.C_WindVolume
class C_WindVolume
{
	struct Vector                                      m_params.shapeParams;                                     // 0x0A60(0x000C)
	struct Vector                                      m_params.scale;                                           // 0x0A6C(0x000C)
	struct Vector                                      m_params.windOrigin;                                      // 0x0A78(0x000C)
	struct Vector                                      m_params.windDir;                                         // 0x0A84(0x000C)
	float                                              m_params.windSpeed;                                       // 0x0A90(0x0004)
	int                                                m_params.windType;                                        // 0x0A94(0x0004)
	float                                              m_params.windGustScale;                                   // 0x0A98(0x0004)
	float                                              m_params.edgeFade;                                        // 0x0A9C(0x0004)
	int                                                m_params.shapeType;                                       // 0x0AA0(0x0004)
	int                                                m_params.sortPriority;                                    // 0x0AA4(0x0004)
	bool                                               m_params.enabled;                                         // 0x0AA8(0x0001)
};

//class DataMap.C_WindSettings
class C_WindSettings
{
	string                                             m_windGustTexture;                                        // 0x0A60(0x0008)
};

//class DataMap.C_BaseAnimatingOverlay
class C_BaseAnimatingOverlay
{
	struct Embedded                                    m_AnimOverlay;                                            // 0x1648(0x0000)
	int                                                m_AnimOverlayCount;                                       // 0x1720(0x0004)
	bool                                               m_currentFrameAnimatingOverlay.animOverlayIsActive;       // 0x1774(0x0009)
	float                                              m_currentFrameAnimatingOverlay.animOverlayStartTime;      // 0x1780(0x0024)
	float                                              m_currentFrameAnimatingOverlay.animOverlayStartCycle;     // 0x17A4(0x0024)
	float                                              m_currentFrameAnimatingOverlay.animOverlayPlaybackRate;   // 0x17C8(0x0024)
	int                                                m_currentFrameAnimatingOverlay.animOverlayModelIndex;     // 0x17EC(0x0024)
	int                                                m_currentFrameAnimatingOverlay.animOverlaySequence;       // 0x1810(0x0012)
	float                                              m_currentFrameAnimatingOverlay.animOverlayWeight;         // 0x1824(0x0024)
	int                                                m_currentFrameAnimatingOverlay.animOverlayOrder;          // 0x1848(0x0024)
	float                                              m_currentFrameAnimatingOverlay.animOverlayAnimTime;       // 0x186C(0x0024)
	float                                              m_currentFrameAnimatingOverlay.animOverlayFadeInDuration; // 0x1890(0x0024)
	float                                              m_currentFrameAnimatingOverlay.animOverlayFadeOutDuration;// 0x18B4(0x0024)
	float                                              m_currentFrameAnimatingOverlay.animOverlayCycle;          // 0x18D8(0x0024)
};

//class DataMap.C_BaseCombatCharacter
class C_BaseCombatCharacter
{
	struct EHANDLE                                     m_currentFrame.weaponGettingSwitchedOut;                  // 0x00C8(0x0008)
	bool                                               m_currentFrame.showActiveWeapon3p;                        // 0x00D0(0x0002)
	float                                              m_deathVelocity;                                          // 0x0474(0x000C)
	int                                                m_phaseShiftFlags;                                        // 0x07B8(0x0004)
	struct Time                                        m_flNextAttack;                                           // 0x1980(0x0004)
	struct Time                                        m_lastFiredTime;                                          // 0x1984(0x0004)
	struct EHANDLE                                     m_lastFiredWeapon;                                        // 0x1988(0x0004)
	struct Time                                        m_raiseFromMeleeEndTime;                                  // 0x198C(0x0004)
	int                                                m_sharedEnergyCount;                                      // 0x1990(0x0004)
	int                                                m_sharedEnergyTotal;                                      // 0x1994(0x0004)
	int                                                m_sharedEnergyLockoutThreshold;                           // 0x1998(0x0004)
	struct Time                                        m_lastSharedEnergyRegenTime;                              // 0x199C(0x0004)
	struct Time                                        m_sharedEnergyRegenRate;                                  // 0x19A0(0x0004)
	float                                              m_sharedEnergyRegenDelay;                                 // 0x19A4(0x0004)
	struct Time                                        m_lastSharedEnergyTakeTime;                               // 0x19A8(0x0004)
	struct Embedded                                    m_inventory;                                              // 0x19B0(0x0000)
	char                                               m_selectedWeapons;                                        // 0x1A10(0x0002)
	struct EHANDLE                                     m_latestPrimaryWeapons;                                   // 0x1A14(0x0008)
	struct EHANDLE                                     m_latestPrimaryWeaponsIndexZeroOrOne;                     // 0x1A1C(0x0008)
	char                                               m_latestNonOffhandWeapons;                                // 0x1A24(0x0002)
	char                                               m_selectedOffhands;                                       // 0x1A26(0x0003)
	char                                               m_selectedOffhandsPendingHybridAction;                    // 0x1A29(0x0003)
	char                                               m_lastCycleSlot;                                          // 0x1A2C(0x0001)
	struct EHANDLE                                     m_latestMeleeWeapon;                                      // 0x1A30(0x0004)
	int                                                m_weaponPermission;                                       // 0x1A34(0x0004)
	struct Time                                        m_weaponDelayEnableTime;                                  // 0x1A38(0x0004)
	bool                                               m_weaponDisabledInScript;                                 // 0x1A3C(0x0001)
	char                                               m_weaponDisabledFlags;                                    // 0x1A52(0x0001)
	int                                                m_weaponTypeDisabledFlags;                                // 0x1A58(0x0004)
	char                                               m_weaponTypeDisabledRefCount;                             // 0x1A5C(0x0009)
	bool                                               m_weaponAmmoRegenDisabled;                                // 0x1A65(0x0001)
	int                                                m_weaponAmmoRegenDisabledRefCount;                        // 0x1A68(0x0004)
	bool                                               m_hudInfo_visibilityTestAlwaysPasses;                     // 0x1A6C(0x0001)
	int                                                m_contextAction;                                          // 0x1A80(0x0004)
	int                                                m_phaseShiftType;                                         // 0x1AAC(0x0004)
	struct Time                                        m_phaseShiftTimeStart;                                    // 0x1AB0(0x0004)
	struct Time                                        m_phaseShiftTimeEnd;                                      // 0x1AB4(0x0004)
};

//class DataMap.C_ExposureController
class C_ExposureController
{
	float                                              m_autoCompensation;                                       // 0x0A60(0x0004)
	float                                              m_autoForceValue;                                         // 0x0A64(0x0004)
	float                                              m_autoMin;                                                // 0x0A68(0x0004)
	float                                              m_autoMax;                                                // 0x0A6C(0x0004)
	float                                              m_autoSpeed;                                              // 0x0A70(0x0004)
	float                                              m_minFadeTime;                                            // 0x0A74(0x0004)
	bool                                               m_isDirectional;                                          // 0x0A78(0x0001)
	float                                              m_directionalHalfAngle;                                   // 0x0A7C(0x0004)
};

//class DataMap.C_ExposureVolume
class C_ExposureVolume
{
	struct unknow                                      m_volumeTester;                                           // 0x0A60(0x0008)
	struct ClassPtr                                    m_exposureTarget;                                         // 0x0A68(0x0008)
	string                                             m_exposureTargetName;                                     // 0x0A70(0x0008)
	float                                              m_exposurePriority;                                       // 0x0A78(0x0004)
};

//class DataMap.C_FogController
class C_FogController
{
	struct Embedded                                    m_fogParams;                                              // 0x0A60(0x006C)
	struct Vector                                      m_fogAngles;                                              // 0x0ACC(0x000C)
	bool                                               m_useAbsAngles;                                           // 0x0AD8(0x0001)
};

//class DataMap.C_FogVolume
class C_FogVolume
{
	struct unknow                                      m_volumeTester;                                           // 0x0A60(0x0008)
	struct ClassPtr                                    m_fogTarget;                                              // 0x0A68(0x0008)
	string                                             m_fogTargetName;                                          // 0x0A70(0x0008)
	int                                                m_fogPriority;                                            // 0x0A78(0x0004)
};

//class DataMap.C_BreakableSurface
class C_BreakableSurface
{
	char                                               m_nPanelBits;                                             // 0x0CE8(0x0100)
};

//class DataMap.C_NPC_SentryTurret
class C_NPC_SentryTurret
{
	int                                                m_killCount;                                              // 0x1DF4(0x0004)
	int                                                m_titanKillCount;                                         // 0x1DF8(0x0004)
};

//class DataMap.C_ParticleSystem
class C_ParticleSystem
{
	bool                                               m_bClientSide;                                            // 0x0A68(0x0001)
	bool                                               m_bActive;                                                // 0x0A69(0x0001)
	float                                              m_warmUpTime;                                             // 0x0A70(0x0004)
	bool                                               m_pauseAfterWarmup;                                       // 0x0A74(0x0001)
	bool                                               m_bInSkybox;                                              // 0x0A75(0x0001)
	bool                                               m_killForReplay;                                          // 0x0A76(0x0001)
	bool                                               m_killIfOverLimit;                                        // 0x0A77(0x0001)
};

//class DataMap.C_DynamicProp
class C_DynamicProp
{
	bool                                               m_bClientSide;                                            // 0x1640(0x0001)
};

//class DataMap.C_Team
class C_Team
{
	int                                                m_score;                                                  // 0x0A60(0x0004)
	int                                                m_score2;                                                 // 0x0A64(0x0004)
	int                                                m_kills;                                                  // 0x0A68(0x0004)
	int                                                m_deaths;                                                 // 0x0A6C(0x0004)
	int                                                m_iRoundsWon;                                             // 0x0A70(0x0004)
	int                                                m_iTeamTeamNum;                                           // 0x0A74(0x0004)
	char                                               m_szTeamname;                                             // 0x0A98(0x0100)
};

//class DataMap.C_PlayerVehicle
class C_PlayerVehicle
{
	struct Vector                                      m_localOrigin;                                            // 0x0158(0x000C)
	struct Embedded                                    m_SequenceTransitioner;                                   // 0x0C20(0x0000)
	struct EHANDLE                                     m_vehicleDriver;                                          // 0x1984(0x0004)
	bool                                               m_vehicleActivated;                                       // 0x19A8(0x0001)
	bool                                               m_blockDuckInput;                                         // 0x19A9(0x0001)
	float                                              m_vehicleLaunchTime;                                      // 0x19B8(0x0004)
	struct Vector                                      m_vehicleVelocity;                                        // 0x19C8(0x000C)
	struct EHANDLE                                     m_vehicleGroundEntity;                                    // 0x19D4(0x0004)
	struct Vector                                      m_vehicleGroundNormal;                                    // 0x19D8(0x000C)
	float                                              m_vehicleGroundDist;                                      // 0x19E4(0x0004)
	float                                              m_hoverVehicleHoverOffsetPrev;                            // 0x19E8(0x0010)
	struct Vector                                      m_hoverVehicleGroundAngles;                               // 0x19F8(0x000C)
	bool                                               m_hoverVehicleIsOnGround;                                 // 0x1A04(0x0001)
	bool                                               m_hoverVehicleHoverSimulationIsAwake;                     // 0x1A06(0x0001)
	struct Vector                                      m_hoverVehicleSmoothTilt;                                 // 0x1AB8(0x000C)
	struct Vector                                      m_hoverVehicleSmoothTiltVelocity;                         // 0x1AC4(0x000C)
	float                                              m_hoverVehicleSmoothYaw;                                  // 0x1AD0(0x0004)
	float                                              m_hoverVehicleSmoothYawVelocity;                          // 0x1AD4(0x0004)
	struct Vector                                      m_hoverVehicleLookAheadAcceleration;                      // 0x1AD8(0x000C)
	struct Time                                        m_hoverVehicleLastBoostTime;                              // 0x1AE4(0x0004)
	bool                                               m_hoverVehicleIsMarkedAsDrivingForward;                   // 0x1AEE(0x0001)
	float                                              m_hoverVehicleStunTimeEnd;                                // 0x1AF0(0x0004)
	float                                              m_hoverVehicleThrottle;                                   // 0x1AF4(0x0004)
	float                                              m_hoverVehicleBanking;                                    // 0x1AFC(0x0004)
	float                                              m_hoverVehicleFrictionLastTime;                           // 0x1B00(0x0004)
	int                                                m_hoverVehicleFrictionSurfPropOther;                      // 0x1B04(0x0004)
	struct Vector                                      m_hoverVehicleFrictionNormal;                             // 0x1B08(0x000C)
	struct Vector                                      m_hoverVehicleFrictionPos;                                // 0x1B14(0x000C)
	struct Vector                                      m_hoverVehiclePhysPush;                                   // 0x1B20(0x000C)
};

//class DataMap.CBaseGrenade
class CBaseGrenade
{
	struct Vector                                      m_vecVelocity;                                            // 0x0488(0x000C)
	bool                                               m_doesExplode;                                            // 0x2E01(0x0001)
	bool                                               m_DmgRadius;                                              // 0x2E04(0x0004)
	float                                              m_grenadeCreationTime;                                    // 0x2E14(0x0004)
	struct Vector                                      m_grenadeCreationOrigin;                                  // 0x2E18(0x000C)
	bool                                               m_useMaskAbility;                                         // 0x2E24(0x0001)
	int                                                m_grenadeStatusFlags;                                     // 0x2E28(0x0004)
	float                                              m_flDamage;                                               // 0x2EB0(0x0004)
	struct EHANDLE                                     m_hThrower;                                               // 0x2EB4(0x0004)
};

//class DataMap.C_GlobalNonRewinding
class C_GlobalNonRewinding
{
	struct Embedded                                    m_playerObserver;                                         // 0x0A60(0x0008)
	struct Embedded                                    m_playerMiscData;                                         // 0x0E60(0x0008)
};

//class DataMap.CPredictedFirstPersonProxy
class CPredictedFirstPersonProxy
{
	struct Vector                                      m_localOrigin;                                            // 0x0158(0x000C)
	struct Vector                                      m_localAngles;                                            // 0x0164(0x000C)
	struct Vector                                      m_vecVelocity;                                            // 0x0488(0x000C)
	struct Vector                                      m_angNetworkAngles;                                       // 0x0494(0x000C)
	struct Embedded                                    m_SequenceTransitioner;                                   // 0x0C20(0x0000)
};

//class DataMap.C_WindowHint
class C_WindowHint
{
	struct Vector                                      normal;                                                   // 0x0A70(0x000C)
	struct Vector                                      right;                                                    // 0x0A7C(0x000C)
	float                                              halfSize;                                                 // 0x0A88(0x0008)
	float                                              halfSize[0];                                              // 0x0A88(0x0004)
	float                                              halfSize[1];                                              // 0x0A8C(0x0004)
};

//class DataMap.C_WallrunCurve
class C_WallrunCurve
{
	int                                                width;                                                    // 0x0A70(0x0004)
	int                                                height;                                                   // 0x0A74(0x0004)
};

//class DataMap.CTurret
class CTurret
{
	float                                              m_aimAngle;                                               // 0x19A0(0x000C)
	float                                              m_minConeAngle;                                           // 0x19AC(0x000C)
	float                                              m_maxConeAngle;                                           // 0x19B8(0x000C)
};

//class DataMap.C_VortexSphere
class C_VortexSphere
{
	bool                                               m_enabled;                                                // 0x0A60(0x0001)
	float                                              m_radius;                                                 // 0x0A64(0x0004)
	float                                              m_height;                                                 // 0x0A68(0x0004)
	float                                              m_bulletFov;                                              // 0x0A6C(0x0004)
	int                                                m_bulletAbsorbedCount;                                    // 0x0A70(0x0004)
	int                                                m_projectileAbsorbedCount;                                // 0x0A74(0x0004)
	struct EHANDLE                                     m_ownerWeapon;                                            // 0x0A78(0x0004)
	struct EHANDLE                                     m_vortexEffect;                                           // 0x0A7C(0x0004)
	struct Vector                                      m_vortexLocalAngles;                                      // 0x0A80(0x000C)
	string                                             m_gunAttachment;                                          // 0x0A90(0x0008)
	struct unknow                                      m_listPrev;                                               // 0x0A98(0x0008)
	struct unknow                                      m_listNext;                                               // 0x0AA0(0x0008)
};

//class DataMap.C_CrossbowBolt
class C_CrossbowBolt
{
	int                                                m_bounceCount;                                            // 0x2E00(0x0004)
	int                                                m_maxBounceCount;                                         // 0x2E04(0x0004)
	bool                                               m_doesGrow;                                               // 0x2E08(0x0001)
	float                                              m_growStartSize;                                          // 0x2E0C(0x0004)
	struct Tick                                        m_growStage1Tick;                                         // 0x2E10(0x0004)
	float                                              m_growStage1Size;                                         // 0x2E14(0x0004)
	struct Tick                                        m_growStage2Tick;                                         // 0x2E18(0x0004)
	float                                              m_growStage2Size;                                         // 0x2E1C(0x0004)
	struct Tick                                        m_growStageFinalTick;                                     // 0x2E20(0x0004)
	float                                              m_growStageFinalSize;                                     // 0x2E24(0x0004)
};

//class DataMap.C_Missile
class C_Missile
{
	bool                                               m_hasPlayedWhizby;                                        // 0x2E00(0x0001)
	struct Vector                                      m_whizByStart;                                            // 0x2E04(0x000C)
	char                                               m_whizBySoundName;                                        // 0x2E10(0x0040)
	float                                              m_homingSpeed;                                            // 0x2E50(0x0004)
	float                                              m_homingSpeedDodgingPlayer;                               // 0x2E54(0x0004)
	struct Vector                                      m_launchDir;                                              // 0x2E58(0x000C)
	struct EHANDLE                                     m_hSpecificTarget;                                        // 0x2E64(0x0004)
	struct Vector                                      m_targetOffset;                                           // 0x2E68(0x000C)
	struct Vector                                      m_targetPosition;                                         // 0x2E74(0x000C)
	bool                                               m_useTargetPosition;                                      // 0x2E80(0x0001)
	float                                              m_postIgnitionSpeed;                                      // 0x2E84(0x0004)
	struct Time                                        m_flGracePeriodEndsAt;                                    // 0x2E88(0x0004)
	bool                                               m_pathSettingsInitialized;                                // 0x2E8C(0x0001)
	bool                                               m_expandContractMissile;                                  // 0x2E8D(0x0001)
	bool                                               m_spiralMissile;                                          // 0x2E8E(0x0001)
	void                                               m_spiralSettings;                                         // 0x2EB0(0x0024)
	struct Embedded                                    m_expandContractSettings;                                 // 0x2F20(0x0058)
	struct Time                                        m_lastThinkTime;                                          // 0x2F78(0x0004)
	struct EHANDLE                                     m_explosionIgnoreEntity;                                  // 0x2F7C(0x0004)
};

//class DataMap.C_Projectile
class C_Projectile
{
	bool                                               m_weaponDataIsSet;                                        // 0x1640(0x0001)
	bool                                               m_forceAdjustToGunBarrelDisabled;                         // 0x1641(0x0001)
	int                                                m_weaponClassIndex;                                       // 0x1644(0x0004)
	float                                              m_destructionDistance;                                    // 0x1648(0x0004)
	int                                                m_passThroughDepthTotal;                                  // 0x164C(0x0004)
	int                                                m_modBitfield;                                            // 0x1650(0x0004)
	int                                                m_overrideMods;                                           // 0x1654(0x0004)
	int                                                m_projectileTrailIndex;                                   // 0x1658(0x0004)
	int                                                m_impactEffectTable;                                      // 0x165C(0x0004)
	bool                                               m_reducedEffects;                                         // 0x1660(0x0001)
	float                                              m_projectileCreationTimeServer;                           // 0x1664(0x0004)
	struct EHANDLE                                     m_weaponSource;                                           // 0x1668(0x0004)
	int                                                m_passThroughModCount;                                    // 0x166C(0x0004)
	struct Vector                                      m_passThroughPoints;                                      // 0x1670(0x000C)
	int                                                m_preModdedTrailEffectIndices1p;                          // 0x167C(0x0004)
	int                                                m_preModdedTrailEffectIndices3p;                          // 0x1680(0x0004)
	struct Vector                                      m_launchOrigin;                                           // 0x1684(0x000C)
	struct unknow                                      m_wpnData;                                                // 0x1690(0x0008)
	short                                              m_hWeaponFileInfo;                                        // 0x1698(0x0002)
	int                                                m_weaponChargeLevel;                                      // 0x169C(0x0004)
	float                                              m_weaponChargeFraction;                                   // 0x16A0(0x0004)
	void                                               m_modVars;                                                // 0x16A8(0x13F0)
	bool                                               m_modVarsAreValid;                                        // 0x2A98(0x0001)
	struct Vector                                      m_launchVel;                                              // 0x2A9C(0x000C)
	void                                               m_scriptCB;                                               // 0x2AA8(0x0028)
	bool                                               m_hasPlayedTrailEffect;                                   // 0x2AD0(0x0001)
	struct Tick                                        m_projectileLifeTimeEndTick;                              // 0x2AD4(0x0004)
	float                                              m_projectileCreationTime;                                 // 0x2AD8(0x0004)
	bool                                               m_isVortexRefired;                                        // 0x2ADC(0x0001)
	bool                                               m_damageAliveOnly;                                        // 0x2ADD(0x0001)
	bool                                               m_usesPositionFunction;                                   // 0x2ADE(0x0001)
	struct Vector                                      m_lastCollisionNormal;                                    // 0x2AE0(0x000C)
	int                                                m_bounceIndex;                                            // 0x2AEC(0x0004)
	int                                                m_randomInt;                                              // 0x2AF0(0x0004)
	bool                                               m_thrownByAI;                                             // 0x2AF4(0x0001)
	float                                              m_perPolyRadius;                                          // 0x2AF8(0x0008)
	struct Vector                                      m_posBeforePhysicsSimulate;                               // 0x2B00(0x000C)
	bool                                               m_hasIgnited;                                             // 0x2B0C(0x0001)
	bool                                               m_inLagCompensation;                                      // 0x2B0D(0x0001)
	struct EHANDLE                                     m_passEntities;                                           // 0x2B10(0x0068)
	float                                              m_projectileSpeed;                                        // 0x2B78(0x0004)
	bool                                               m_wantStartTrailEffect;                                   // 0x2B98(0x0001)
	bool                                               m_hasCalledPostDataUpdate;                                // 0x2B9A(0x0001)
};

//class DataMap.CWeaponX
class CWeaponX
{
	struct Vector                                      m_localOrigin;                                            // 0x0158(0x000C)
	int                                                m_nNextThinkTick;                                         // 0x0574(0x0004)
	struct Embedded                                    m_SequenceTransitioner;                                   // 0x0C20(0x0000)
	struct EHANDLE                                     m_weaponOwner;                                            // 0x1640(0x0004)
	struct Time                                        m_lastPrimaryAttackTime;                                  // 0x1644(0x0004)
	struct Time                                        m_nextReadyTime;                                          // 0x1648(0x0004)
	struct Time                                        m_nextPrimaryAttackTime;                                  // 0x164C(0x0004)
	struct Time                                        m_attackTimeThisFrame;                                    // 0x1650(0x0004)
	int                                                m_worldModelIndexOverride;                                // 0x1654(0x0004)
	int                                                m_iWorldModelIndex;                                       // 0x1658(0x0004)
	int                                                m_holsterModelIndex;                                      // 0x165C(0x0004)
	int                                                m_droppedModelIndex;                                      // 0x1660(0x0004)
	int                                                m_idealSequence;                                          // 0x1664(0x0002)
	int                                                m_idealActivity;                                          // 0x1666(0x0002)
	int                                                m_weaponActivity;                                         // 0x1668(0x0002)
	int                                                m_ActiveState;                                            // 0x166C(0x0004)
	int                                                m_ammoInClip;                                             // 0x1670(0x0004)
	int                                                m_ammoInStockpile;                                        // 0x1674(0x0004)
	int                                                m_lifetimeShots;                                          // 0x1678(0x0004)
	struct Time                                        m_flTimeWeaponIdle;                                       // 0x167C(0x0004)
	int                                                m_weapState;                                              // 0x1680(0x0004)
	bool                                               m_discarded;                                              // 0x1685(0x0001)
	bool                                               m_bInReload;                                              // 0x1686(0x0001)
	int                                                m_tossRelease;                                            // 0x168C(0x0001)
	int                                                m_offhandSwitchSlot;                                      // 0x1690(0x0004)
	int                                                m_energizeState;                                          // 0x1694(0x0001)
	struct Time                                        m_startEnergizingTime;                                    // 0x1698(0x0004)
	struct Time                                        m_energizedEndTime;                                       // 0x169C(0x0004)
	float                                              m_heatValue;                                              // 0x16A0(0x0004)
	float                                              m_heatValueOnLastFire;                                    // 0x16A4(0x0004)
	int                                                m_customActivity;                                         // 0x16A8(0x0002)
	int                                                m_customActivitySequence;                                 // 0x16AA(0x0002)
	struct EHANDLE                                     m_customActivityOwner;                                    // 0x16AC(0x0004)
	struct Time                                        m_customActivityEndTime;                                  // 0x16B0(0x0004)
	char                                               m_customActivityFlags;                                    // 0x16B4(0x0001)
	struct Embedded                                    m_playerData;                                             // 0x16B8(0x0000)
	bool                                               m_targetingLaserEnabledScript;                            // 0x17AC(0x0001)
	bool                                               m_needsReloadCheck;                                       // 0x17AD(0x0001)
	bool                                               m_needsEmptyCycleCheck;                                   // 0x17AE(0x0001)
	int                                                m_skinOverride;                                           // 0x17B0(0x0004)
	bool                                               m_skinOverrideIsValid;                                    // 0x17B4(0x0001)
	struct Time                                        m_chargeStartTime;                                        // 0x17B8(0x0004)
	struct Time                                        m_chargeEndTime;                                          // 0x17BC(0x0004)
	float                                              m_lastChargeFrac;                                         // 0x17C0(0x0004)
	struct Time                                        m_lastRegenTime;                                          // 0x17C4(0x0004)
	struct Time                                        m_cooldownEndTime;                                        // 0x17C8(0x0004)
	bool                                               m_stockPileWasDraining;                                   // 0x17CC(0x0001)
	bool                                               m_weaponIsCharging;                                       // 0x17CD(0x0001)
	bool                                               m_weaponChargeLevelIncreasedAnimPlaying;                  // 0x17CE(0x0001)
	int                                                m_lastChargeLevel;                                        // 0x17D0(0x0004)
	int                                                m_chargeEnergyDepleteStepCounter;                         // 0x17D4(0x0004)
	int                                                m_burstFireCount;                                         // 0x17D8(0x0004)
	int                                                m_burstFireIndex;                                         // 0x17DC(0x0004)
	int                                                m_shotIndexForSpread;                                     // 0x17E0(0x0004)
	int                                                m_shotCount;                                              // 0x17E4(0x0004)
	struct Time                                        m_sustainedDischargeEndTime;                              // 0x17E8(0x0004)
	float                                              m_sustainedLaserCurrentSpread;                            // 0x17EC(0x0004)
	bool                                               m_sustainedDischargeIsInPrimaryAttack;                    // 0x17F0(0x0001)
	char                                               m_sustainedLaserNextRandomSeed;                           // 0x17F1(0x0001)
	int                                                m_modBitfieldFromPlayer;                                  // 0x17F4(0x0004)
	int                                                m_modBitfieldInternal;                                    // 0x17F8(0x0004)
	int                                                m_modBitfieldCurrent;                                     // 0x17FC(0x0004)
	int                                                m_curSharedEnergyCost;                                    // 0x1800(0x0004)
	bool                                               m_grappleWeaponNeedsDryfire;                              // 0x1804(0x0001)
	float                                              m_scriptFloat0;                                           // 0x1808(0x0004)
	bool                                               m_shouldPlayIdleAnims;                                    // 0x180C(0x0001)
	bool                                               m_scriptActivated;                                        // 0x180D(0x0001)
	char                                               m_curKillCount;                                           // 0x180E(0x0001)
	char                                               m_curKnockdownCount;                                      // 0x180F(0x0001)
	char                                               m_attachmentIndices;                                      // 0x1810(0x0003)
	float                                              m_flNextEmptySoundTime;                                   // 0x2E28(0x0004)
	bool                                               m_bRemoveable;                                            // 0x2E4C(0x0001)
};

//class DataMap.C_Zipline
class C_Zipline
{
	bool                                               m_detachEndOnUse;                                         // 0x0A60(0x0001)
	int                                                m_currentFrameZipline.numZiplinePoints;                   // 0x0A88(0x0004)
	struct Vector                                      m_currentFrameZipline.ziplinePositions;                   // 0x0A8C(0x00C0)
	struct Vector                                      m_currentFrameZipline.ziplinePreviousPositions;           // 0x0B4C(0x00C0)
	float                                              m_currentFrameZipline.ziplineDistances;                   // 0x0C0C(0x003C)
	struct Embedded                                    m_ziplinePhysics;                                         // 0x0C58(0x0000)
};

//class RecvTable.DT_CollisionProperty
class DT_CollisionProperty
{
	struct Vector                                      m_vecMins;                                                // 0x0010(0x000C)
	struct Vector                                      m_vecMaxs;                                                // 0x001C(0x000C)
	int                                                m_usSolidFlags;                                           // 0x0028(0x0004)
	int                                                m_nSolidType;                                             // 0x002C(0x0001)
	int                                                m_triggerBloat;                                           // 0x002D(0x0001)
	int                                                m_collisionDetailLevel;                                   // 0x002E(0x0001)
	int                                                m_nSurroundType;                                          // 0x003C(0x0001)
	struct Vector                                      m_vecSpecifiedSurroundingMins;                            // 0x0048(0x000C)
	struct Vector                                      m_vecSpecifiedSurroundingMaxs;                            // 0x0054(0x000C)
};

//class RecvTable.DT_PredictableId
class DT_PredictableId
{
	int                                                m_PredictableID;                                          // 0x07CC(0x0004)
};

//class RecvTable.DT_HighlightSettings
class DT_HighlightSettings
{
	struct DataTable                                   m_highlightParams;                                        // 0x01B8(0x0000)
	struct DataTable                                   m_highlightFunctionBits;                                  // 0x02C0(0x0000)
	struct DataTable                                   m_highlightTeamBits;                                      // 0x0318(0x0000)
	struct DataTable                                   m_highlightServerFadeBases;                               // 0x0370(0x0000)
	struct DataTable                                   m_highlightServerFadeStartTimes;                          // 0x0378(0x0000)
	struct DataTable                                   m_highlightServerFadeEndTimes;                            // 0x0380(0x0000)
	int                                                m_highlightServerContextID;                               // 0x03C0(0x0004)
};

//class RecvTable.DT_BaseEntity
class DT_BaseEntity
{
	struct DataTable                                   HighlightSettings;                                        // 0x0000(0x0000)
	int                                                movetype;                                                 // 0x0000(0xFFFFFFFF)
	int                                                movecollide;                                              // 0x0000(0xFFFFFFFF)
	struct DataTable                                   predictable_id;                                           // 0x0000(0x0000)
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_fEffects;                                               // 0x0040(0x0004)
	int                                                m_usableType;                                             // 0x0044(0x0004)
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	int                                                m_clrRender;                                              // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_clIntensity;                                            // 0x0054(0x0001)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	int                                                m_bossPlayer;                                             // 0x0124(0x0004)
	int                                                m_shieldHealth;                                           // 0x0170(0x0004)
	int                                                m_shieldHealthMax;                                        // 0x0174(0x0004)
	int                                                m_wantsScopeHighlight;                                    // 0x03EC(0x0001)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	int                                                m_visibilityFlags;                                        // 0x0444(0x0004)
	int                                                m_iTeamNum;                                               // 0x044C(0x0004)
	int                                                m_teamMemberIndex;                                        // 0x0454(0x0004)
	int                                                m_squadID;                                                // 0x0458(0x0004)
	int                                                m_grade;                                                  // 0x045C(0x0004)
	int                                                m_ignorePredictedTriggerFlags;                            // 0x0460(0x0004)
	int                                                m_passThroughFlags;                                       // 0x0468(0x0004)
	int                                                m_passThroughThickness;                                   // 0x046C(0x0004)
	float                                              m_passThroughDirection;                                   // 0x0470(0x0004)
	int                                                m_bIsSoundCodeControllerValueSet;                         // 0x0480(0x0001)
	float                                              m_flSoundCodeControllerValue;                             // 0x0484(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
	int                                                m_bRenderWithViewModels;                                  // 0x04AC(0x0001)
	int                                                m_nRenderFX;                                              // 0x04AD(0x0001)
	int                                                m_nRenderMode;                                            // 0x04B9(0x0001)
	struct DataTable                                   m_Collision;                                              // 0x04C0(0x0000)
	int                                                m_CollisionGroup;                                         // 0x0540(0x0004)
	int                                                m_contents;                                               // 0x0544(0x0004)
	int                                                m_collideWithOwner;                                       // 0x0548(0x0001)
	string                                             m_iSignifierName;                                         // 0x0580(0x0000)
	string                                             m_iName;                                                  // 0x0589(0x0000)
	int                                                m_scriptNameIndex;                                        // 0x0690(0x0004)
	int                                                m_instanceNameIndex;                                      // 0x0694(0x0004)
	string                                             m_holdUsePrompt;                                          // 0x0718(0x0000)
	string                                             m_pressUsePrompt;                                         // 0x0720(0x0000)
	int                                                m_phaseShiftFlags;                                        // 0x07B8(0x0004)
	int                                                m_baseTakeDamage;                                         // 0x07BC(0x0001)
	int                                                m_invulnerableToDamageCount;                              // 0x07C0(0x0004)
	struct Time                                        m_attachmentLerpStartTime;                                // 0x0834(0x0004)
	struct Time                                        m_attachmentLerpEndTime;                                  // 0x0838(0x0004)
	struct Vector                                      m_attachmentLerpStartOrigin;                              // 0x083C(0x000C)
	struct Vector                                      m_attachmentLerpStartAngles;                              // 0x0848(0x000C)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
	float                                              m_fadeDist;                                               // 0x0864(0x0004)
	int                                                m_dissolveEffectEntityHandle;                             // 0x0914(0x0004)
	int                                                m_usablePriority;                                         // 0x0924(0x0004)
	float                                              m_usableDistanceOverride;                                 // 0x0928(0x0004)
	float                                              m_usableFOV;                                              // 0x092C(0x0004)
	float                                              m_usePromptSize;                                          // 0x0930(0x0004)
	struct DataTable                                   m_spottedByTeams;                                         // 0x0948(0x0000)
	int                                                m_firstChildEntityLink;                                   // 0x0A40(0x0004)
	int                                                m_firstParentEntityLink;                                  // 0x0A44(0x0004)
	struct BitMask                                     m_realmsBitMask;                                          // 0x0A48(0x0008)
};

//class RecvTable.DT_SkyCamera
class DT_SkyCamera
{
	struct DataTable                                   DT_SkyCamera;                                             // 0x0000(0x0000)
};

//class RecvTable.DT_ZiplinePhysicsExlusive
class DT_ZiplinePhysicsExlusive
{
	struct DataTable                                   m_nodes;                                                  // 0x0028(0x0000)
	int                                                m_numNodes;                                               // 0x0228(0x0004)
	float                                              m_remainingUnsimulatedTime;                               // 0x0234(0x0004)
};

//class RecvTable.DT_ZiplinePhysics
class DT_ZiplinePhysics
{
	struct DataTable                                   ziplinephysicsexclusive;                                  // 0x0000(0x0000)
	int                                                m_isInit;                                                 // 0x0008(0x0001)
	int                                                m_ziplineType;                                            // 0x000C(0x0004)
	struct Vector                                      m_ziplineStart;                                           // 0x0010(0x000C)
	struct Vector                                      m_ziplineEnd;                                             // 0x001C(0x000C)
	float                                              m_springDistance;                                         // 0x022C(0x0004)
	float                                              m_springDistanceScale;                                    // 0x0230(0x0004)
	int                                                m_outerZiplineEntity;                                     // 0x0238(0x0004)
	struct DataTable                                   m_attachedEntities;                                       // 0x0240(0x0000)
	int                                                m_numAttachedEntities;                                    // 0x0340(0x0004)
	int                                                m_ziplineOwner;                                           // 0x0344(0x0004)
};

//class RecvTable.DT_Zipline
class DT_Zipline
{
	struct DataTable                                   DT_Zipline;                                               // 0x0000(0x0000)
	int                                                m_numZiplinePoints;                                       // 0x0008(0x0004)
	struct DataTable                                   m_ziplinePositions;                                       // 0x000C(0x0000)
	int                                                m_detachEndOnUse;                                         // 0x0A60(0x0001)
	int                                                m_dropToBottom;                                           // 0x0A61(0x0001)
	float                                              m_ziplineAutoDetachDistance;                              // 0x0A64(0x0004)
	int                                                m_ziplineVerticalPushOffInDirectionX;                     // 0x0A68(0x0001)
	int                                                m_ziplineVerticalPreserveVelocity;                        // 0x0A69(0x0001)
	float                                              m_ziplineWidth;                                           // 0x0A6C(0x0004)
	int                                                m_ziplineEnabled;                                         // 0x0A70(0x0001)
	int                                                m_ziplineAutoAttachEnabled;                               // 0x0A71(0x0001)
	float                                              m_ziplineFadeDist;                                        // 0x0A74(0x0004)
	float                                              m_ziplineSpeedScale;                                      // 0x0A78(0x0004)
	int                                                m_ziplineFollowsPath;                                     // 0x0A7C(0x0001)
	int                                                m_prevZipline;                                            // 0x0C50(0x0004)
	int                                                m_nextZipline;                                            // 0x0C54(0x0004)
	struct DataTable                                   m_ziplinePhysics;                                         // 0x0C58(0x0000)
	int                                                m_ziplineMaterialIndex;                                   // 0x0FA0(0x0004)
	struct DataTable                                   m_ziplineRestPositions;                                   // 0x0FA4(0x0000)
	int                                                m_numZiplineRestPositions;                                // 0x1064(0x0004)
};

//class RecvTable.DT_Ziprail
class DT_Ziprail
{
	struct DataTable                                   DT_Ziprail;                                               // 0x0000(0x0000)
	int                                                m_numZiprailPathNodes;                                    // 0x1070(0x0001)
	struct DataTable                                   m_numSmoothPointsForPathNodes;                            // 0x1074(0x0000)
	struct DataTable                                   m_tangentTypesForPathNodes;                               // 0x10F4(0x0000)
	struct DataTable                                   m_positionsForPathNodes;                                  // 0x1174(0x0000)
	struct DataTable                                   m_smoothDistanceToNode;                                   // 0x12F4(0x0000)
	float                                              m_ziprailPathLen;                                         // 0x1374(0x0004)
	struct Vector                                      m_pathExtentsMins;                                        // 0x1378(0x000C)
	struct Vector                                      m_pathExtentsMaxs;                                        // 0x1384(0x000C)
	int                                                m_ziprailUseAutoDetachSpeed;                              // 0x1390(0x0001)
};

//class RecvTable.DT_ZiplineEnd
class DT_ZiplineEnd
{
	struct DataTable                                   DT_ZiplineEnd;                                            // 0x0000(0x0000)
	float                                              m_autoDetachDistance;                                     // 0x0A60(0x0004)
	int                                                m_verticalPushOffInDirectionX;                            // 0x0A64(0x0001)
	int                                                m_prevZipline;                                            // 0x0A68(0x0004)
};

//class RecvTable.DT_ServerAnimationData
class DT_ServerAnimationData
{
	struct Time                                        m_animStartTime;                                          // 0x0008(0x0004)
	float                                              m_animStartCycle;                                         // 0x000C(0x0004)
	int                                                m_animSequence;                                           // 0x0020(0x0002)
	struct Time                                        m_nResetEventsStartTime;                                  // 0x0E64(0x0004)
	int                                                m_nResetEventsParity;                                     // 0x0E68(0x0004)
};

//class RecvTable.DT_SequenceTransitioner
class DT_SequenceTransitioner
{
	struct DataTable                                   m_sequenceTransitionerLayers;                             // 0x0050(0x0000)
	int                                                m_sequenceTransitionerLayerCount;                         // 0x01A0(0x0004)
};

//class RecvTable.DT_AnimRelativeData
class DT_AnimRelativeData
{
	struct Vector                                      m_animInitialPos;                                         // 0x0000(0x000C)
	struct Vector                                      m_animInitialVel;                                         // 0x000C(0x000C)
	struct Rotation                                    m_animInitialRot;                                         // 0x0018(0x0010)
	struct Vector                                      m_animInitialCorrectPos;                                  // 0x0028(0x000C)
	struct Rotation                                    m_animInitialCorrectRot;                                  // 0x0034(0x0010)
	struct Vector                                      m_animEntityToRefOffset;                                  // 0x0044(0x000C)
	struct Rotation                                    m_animEntityToRefRotation;                                // 0x0050(0x0010)
	struct Time                                        m_animBlendBeginTime;                                     // 0x0060(0x0004)
	struct Time                                        m_animBlendEndTime;                                       // 0x0064(0x0004)
	int                                                m_animScriptSequence;                                     // 0x0068(0x0002)
	int                                                m_animScriptModel;                                        // 0x006C(0x0004)
	int                                                m_animIgnoreParentRot;                                    // 0x0070(0x0001)
	int                                                m_animMotionMode;                                         // 0x0074(0x0004)
};

//class RecvTable.DT_PredictedAnimEventData
class DT_PredictedAnimEventData
{
	struct DataTable                                   m_predictedAnimEventTimes;                                // 0x0008(0x0000)
	struct DataTable                                   m_predictedAnimEventIndices;                              // 0x0028(0x0000)
	int                                                m_predictedAnimEventCount;                                // 0x0048(0x0004)
	int                                                m_predictedAnimEventTarget;                               // 0x004C(0x0004)
	int                                                m_predictedAnimEventSequence;                             // 0x0050(0x0002)
	int                                                m_predictedAnimEventModel;                                // 0x0054(0x0004)
	struct Time                                        m_predictedAnimEventsReadyToFireTime;                     // 0x0058(0x0004)
};

//class RecvTable.DT_BaseAnimating
class DT_BaseAnimating
{
	struct DataTable                                   DT_BaseAnimating;                                         // 0x0000(0x0000)
	struct DataTable                                   serveranimdata;                                           // 0x0000(0x0000)
	float                                              m_animPlaybackRate;                                       // 0x0010(0x0004)
	int                                                m_animModelIndex;                                         // 0x0014(0x0004)
	int                                                m_nNewSequenceParity;                                     // 0x0018(0x0004)
	int                                                m_animFrozen;                                             // 0x0022(0x0001)
	int                                                m_bClientSideRagdoll;                                     // 0x0023(0x0001)
	struct Vector                                      m_vecForce;                                               // 0x0024(0x000C)
	struct DataTable                                   m_flPoseParameter;                                        // 0x0030(0x0000)
	float                                              m_flEstIkOffset;                                          // 0x0090(0x0004)
	int                                                m_passDamageToParent;                                     // 0x07C4(0x0001)
	int                                                m_animNetworkFlags;                                       // 0x0A88(0x0004)
	int                                                m_animActive;                                             // 0x0A8C(0x0001)
	int                                                m_animCollisionEnabled;                                   // 0x0A8F(0x0001)
	int                                                m_animRelativeToGroundEnabled;                            // 0x0A90(0x0001)
	int                                                m_animPlantingEnabled;                                    // 0x0A91(0x0001)
	struct DataTable                                   m_animRelativeData;                                       // 0x0A94(0x0000)
	int                                                m_syncingWithEntity;                                      // 0x0B84(0x0004)
	struct DataTable                                   m_predictedAnimEventData;                                 // 0x0B88(0x0000)
	int                                                m_nRagdollImpactFXTableId;                                // 0x0BF4(0x0004)
	float                                              m_flSkyScaleStartValue;                                   // 0x0BF8(0x0004)
	float                                              m_flSkyScaleEndValue;                                     // 0x0BFC(0x0004)
	struct Time                                        m_flSkyScaleStartTime;                                    // 0x0C00(0x0004)
	struct Time                                        m_flSkyScaleEndTime;                                      // 0x0C04(0x0004)
	struct DataTable                                   m_SequenceTransitioner;                                   // 0x0C20(0x0000)
	int                                                m_nSkin;                                                  // 0x0E50(0x0004)
	int                                                m_skinMod;                                                // 0x0E54(0x0002)
	int                                                m_nBody;                                                  // 0x0E58(0x0004)
	int                                                m_camoIndex;                                              // 0x0E5C(0x0004)
	int                                                m_nForceBone;                                             // 0x0E98(0x0004)
	int                                                m_bSequenceFinished;                                      // 0x0EFC(0x0001)
	float                                              m_lockedAnimDeltaYaw;                                     // 0x0F00(0x0004)
	float                                              m_flModelScale;                                           // 0x0F08(0x0004)
};

//class RecvTable.DT_WeaponX_LocalWeaponData
class DT_WeaponX_LocalWeaponData
{
	int                                                m_nNextThinkTick;                                         // 0x0574(0x0004)
	struct Time                                        m_lastPrimaryAttackTime;                                  // 0x1644(0x0004)
	struct Time                                        m_nextReadyTime;                                          // 0x1648(0x0004)
	struct Time                                        m_nextPrimaryAttackTime;                                  // 0x164C(0x0004)
	struct Time                                        m_attackTimeThisFrame;                                    // 0x1650(0x0004)
	int                                                m_ammoInClip;                                             // 0x1670(0x0004)
	int                                                m_ammoInStockpile;                                        // 0x1674(0x0004)
	int                                                m_lifetimeShots;                                          // 0x1678(0x0004)
	struct Time                                        m_flTimeWeaponIdle;                                       // 0x167C(0x0004)
	int                                                m_bInReload;                                              // 0x1686(0x0001)
};

//class RecvTable.DT_WeaponPlayerData
class DT_WeaponPlayerData
{
	float                                              m_moveSpread;                                             // 0x0008(0x0004)
	struct Time                                        m_spreadStartTime;                                        // 0x000C(0x0004)
	float                                              m_spreadStartFracHip;                                     // 0x0010(0x0004)
	float                                              m_spreadStartFracADS;                                     // 0x0014(0x0004)
	float                                              m_kickSpreadHipfire;                                      // 0x0018(0x0004)
	float                                              m_kickSpreadADS;                                          // 0x001C(0x0004)
	struct Time                                        m_kickTime;                                               // 0x0020(0x0004)
	float                                              m_kickScaleBasePitch;                                     // 0x0024(0x0004)
	float                                              m_kickScaleBaseYaw;                                       // 0x0028(0x0004)
	float                                              m_kickPatternScaleBase;                                   // 0x002C(0x0004)
	struct Time                                        m_kickSpringHeatBaseTime;                                 // 0x0030(0x0004)
	float                                              m_kickSpringHeatBaseValue;                                // 0x0034(0x0004)
	struct Time                                        m_semiAutoTriggerHoldTime;                                // 0x0038(0x0004)
	int                                                m_semiAutoTriggerDown;                                    // 0x003C(0x0001)
	int                                                m_pendingTriggerPull;                                     // 0x003D(0x0001)
	int                                                m_semiAutoNeedsRechamber;                                 // 0x003E(0x0001)
	int                                                m_pendingReloadAttempt;                                   // 0x003F(0x0001)
	int                                                m_offhandHybridNormalMode;                                // 0x0040(0x0001)
	int                                                m_pendingoffhandHybridToss;                               // 0x0041(0x0001)
	int                                                m_fastHolster;                                            // 0x0042(0x0001)
	int                                                m_didFirstDeploy;                                         // 0x0043(0x0001)
	int                                                m_shouldCatch;                                            // 0x0044(0x0001)
	int                                                m_clipModelIsHidden;                                      // 0x0045(0x0001)
	int                                                m_segmentedReloadEndSeqRequired;                          // 0x0046(0x0001)
	int                                                m_reloadStartedEmpty;                                     // 0x0047(0x0001)
	int                                                m_segmentedAnimStartedOneHanded;                          // 0x0048(0x0001)
	int                                                m_segmentedReloadCanRestartLoop;                          // 0x0049(0x0001)
	int                                                m_segmentedReloadLoopFireLocked;                          // 0x004A(0x0001)
	struct DataTable                                   m_realtimeModCmds;                                        // 0x004B(0x0000)
	int                                                m_realtimeModCmdHead;                                     // 0x0053(0x0001)
	int                                                m_realtimeModCmdCount;                                    // 0x0054(0x0001)
	int                                                m_realtimeModCanADS;                                      // 0x0055(0x0001)
	int                                                m_customActivityAttachedModelIndex;                       // 0x0058(0x0004)
	int                                                m_customActivityAttachedModelAttachmentId;                // 0x005C(0x0001)
	struct Time                                        m_fireRateLerp_startTime;                                 // 0x0060(0x0004)
	float                                              m_fireRateLerp_startFraction;                             // 0x0064(0x0004)
	struct Time                                        m_fireRateLerp_stopTime;                                  // 0x0068(0x0004)
	float                                              m_fireRateLerp_stopFraction;                              // 0x006C(0x0004)
	int                                                m_chargeAnimIndex;                                        // 0x0070(0x0004)
	int                                                m_chargeAnimIndexOld;                                     // 0x0074(0x0004)
	int                                                m_proScreen_owner;                                        // 0x0078(0x0004)
	int                                                m_proScreen_int0;                                         // 0x007C(0x0004)
	int                                                m_proScreen_int1;                                         // 0x0080(0x0004)
	int                                                m_proScreen_int2;                                         // 0x0084(0x0004)
	float                                              m_proScreen_float0;                                       // 0x0088(0x0004)
	float                                              m_proScreen_float1;                                       // 0x008C(0x0004)
	float                                              m_proScreen_float2;                                       // 0x0090(0x0004)
	int                                                m_reloadMilestone;                                        // 0x0094(0x0004)
	int                                                m_rechamberMilestone;                                     // 0x0098(0x0004)
	int                                                m_cooldownMilestone;                                      // 0x009C(0x0004)
	int                                                m_prevSeqWeight;                                          // 0x00A0(0x0004)
	struct Time                                        m_fullReloadStartTime;                                    // 0x00A4(0x0004)
	struct Time                                        m_scriptTime0;                                            // 0x00A8(0x0004)
	struct Time                                        m_scriptTime1;                                            // 0x00AC(0x0004)
	int                                                m_scriptFlags0;                                           // 0x00B0(0x0004)
	int                                                m_scriptInt0;                                             // 0x00B4(0x0002)
	int                                                m_scriptInt1;                                             // 0x00B6(0x0002)
	float                                              m_curZoomFOV;                                             // 0x00B8(0x0004)
	float                                              m_targetZoomFOV;                                          // 0x00BC(0x0004)
	float                                              m_zoomFOVLerpTime;                                        // 0x00C0(0x0004)
	struct Time                                        m_zoomFOVLerpEndTime;                                     // 0x00C4(0x0004)
	struct Time                                        m_latestDryfireTime;                                      // 0x00C8(0x0004)
	struct Time                                        m_requestedAttackEndTime;                                 // 0x00CC(0x0004)
	int                                                m_currentAltFireAnimIndex;                                // 0x00D0(0x0004)
	int                                                m_legendaryModelIndex;                                    // 0x00D4(0x0004)
	int                                                m_charmModelIndex;                                        // 0x00D8(0x0004)
	int                                                m_charmAttachment;                                        // 0x00DC(0x0001)
	int                                                m_charmScriptIndex;                                       // 0x00E0(0x0004)
	int                                                m_stickerDecalMaterialIndex;                              // 0x00E4(0x0004)
	int                                                m_stickerDecalAttachment;                                 // 0x00E8(0x0001)
	float                                              m_stickerScale;                                           // 0x00EC(0x0004)
};

//class RecvTable.DT_WeaponX_PredictingClientOnly
class DT_WeaponX_PredictingClientOnly
{
	struct Time                                        m_lastRegenTime;                                          // 0x17C4(0x0004)
	struct Time                                        m_cooldownEndTime;                                        // 0x17C8(0x0004)
	int                                                m_stockPileWasDraining;                                   // 0x17CC(0x0001)
	int                                                m_weaponIsCharging;                                       // 0x17CD(0x0001)
	int                                                m_weaponChargeLevelIncreasedAnimPlaying;                  // 0x17CE(0x0001)
	int                                                m_lastChargeLevel;                                        // 0x17D0(0x0004)
	int                                                m_chargeEnergyDepleteStepCounter;                         // 0x17D4(0x0004)
	int                                                m_burstFireCount;                                         // 0x17D8(0x0004)
	int                                                m_burstFireIndex;                                         // 0x17DC(0x0004)
	int                                                m_shotIndexForSpread;                                     // 0x17E0(0x0004)
	int                                                m_shotCount;                                              // 0x17E4(0x0004)
	int                                                m_animModelIndexPredictingClientOnly;                     // 0x1828(0x0004)
	int                                                m_animSequencePredictingClientOnly;                       // 0x182C(0x0002)
};

//class RecvTable.DT_WeaponX
class DT_WeaponX
{
	struct DataTable                                   DT_WeaponX;                                               // 0x0000(0x0000)
	struct DataTable                                   LocalWeaponData;                                          // 0x0000(0x0000)
	struct DataTable                                   predictingClientOnly;                                     // 0x0000(0x0000)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	int                                                m_bClientSideAnimation;                                   // 0x100E(0x0001)
	int                                                m_weaponOwner;                                            // 0x1640(0x0004)
	int                                                m_worldModelIndexOverride;                                // 0x1654(0x0004)
	int                                                m_iWorldModelIndex;                                       // 0x1658(0x0004)
	int                                                m_holsterModelIndex;                                      // 0x165C(0x0004)
	int                                                m_droppedModelIndex;                                      // 0x1660(0x0004)
	int                                                m_idealSequence;                                          // 0x1664(0x0002)
	int                                                m_idealActivity;                                          // 0x1666(0x0002)
	int                                                m_weaponActivity;                                         // 0x1668(0x0002)
	int                                                m_ActiveState;                                            // 0x166C(0x0004)
	int                                                m_weapState;                                              // 0x1680(0x0004)
	int                                                m_allowedToUse;                                           // 0x1684(0x0001)
	int                                                m_discarded;                                              // 0x1685(0x0001)
	int                                                m_forcedADS;                                              // 0x1688(0x0004)
	int                                                m_tossRelease;                                            // 0x168C(0x0001)
	int                                                m_offhandSwitchSlot;                                      // 0x1690(0x0004)
	int                                                m_energizeState;                                          // 0x1694(0x0001)
	struct Time                                        m_startEnergizingTime;                                    // 0x1698(0x0004)
	struct Time                                        m_energizedEndTime;                                       // 0x169C(0x0004)
	float                                              m_heatValue;                                              // 0x16A0(0x0004)
	float                                              m_heatValueOnLastFire;                                    // 0x16A4(0x0004)
	int                                                m_customActivity;                                         // 0x16A8(0x0002)
	int                                                m_customActivitySequence;                                 // 0x16AA(0x0002)
	int                                                m_customActivityOwner;                                    // 0x16AC(0x0004)
	struct Time                                        m_customActivityEndTime;                                  // 0x16B0(0x0004)
	int                                                m_customActivityFlags;                                    // 0x16B4(0x0001)
	struct DataTable                                   m_playerData;                                             // 0x16B8(0x0000)
	int                                                m_lastTossedGrenade;                                      // 0x17A8(0x0004)
	int                                                m_targetingLaserEnabledScript;                            // 0x17AC(0x0001)
	int                                                m_needsReloadCheck;                                       // 0x17AD(0x0001)
	int                                                m_needsEmptyCycleCheck;                                   // 0x17AE(0x0001)
	int                                                m_skinOverride;                                           // 0x17B0(0x0004)
	int                                                m_skinOverrideIsValid;                                    // 0x17B4(0x0001)
	struct Time                                        m_chargeStartTime;                                        // 0x17B8(0x0004)
	struct Time                                        m_chargeEndTime;                                          // 0x17BC(0x0004)
	float                                              m_lastChargeFrac;                                         // 0x17C0(0x0004)
	struct Time                                        m_sustainedDischargeEndTime;                              // 0x17E8(0x0004)
	float                                              m_sustainedLaserCurrentSpread;                            // 0x17EC(0x0004)
	int                                                m_sustainedDischargeIsInPrimaryAttack;                    // 0x17F0(0x0001)
	int                                                m_sustainedLaserNextRandomSeed;                           // 0x17F1(0x0001)
	int                                                m_modBitfieldFromPlayer;                                  // 0x17F4(0x0004)
	int                                                m_modBitfieldInternal;                                    // 0x17F8(0x0004)
	int                                                m_modBitfieldCurrent;                                     // 0x17FC(0x0004)
	int                                                m_curSharedEnergyCost;                                    // 0x1800(0x0004)
	int                                                m_grappleWeaponNeedsDryfire;                              // 0x1804(0x0001)
	float                                              m_scriptFloat0;                                           // 0x1808(0x0004)
	int                                                m_shouldPlayIdleAnims;                                    // 0x180C(0x0001)
	int                                                m_scriptActivated;                                        // 0x180D(0x0001)
	int                                                m_curKillCount;                                           // 0x180E(0x0001)
	int                                                m_curKnockdownCount;                                      // 0x180F(0x0001)
	struct DataTable                                   m_attachmentIndices;                                      // 0x1810(0x0000)
	int                                                m_lockedSet;                                              // 0x1814(0x0004)
	int                                                m_isLoadoutPickup;                                        // 0x1818(0x0001)
	int                                                m_utilityEnt;                                             // 0x181C(0x0004)
	int                                                m_weaponNameIndex;                                        // 0x1824(0x0004)
	int                                                m_oaActiveOverride;                                       // 0x1830(0x0004)
	int                                                m_parentTurret;                                           // 0x1834(0x0004)
};

//class RecvTable.DT_TEProjectileTrail
class DT_TEProjectileTrail
{
	struct DataTable                                   DT_TEProjectileTrail;                                     // 0x0000(0x0000)
	int                                                m_owner;                                                  // 0x0028(0x0004)
	struct Vector                                      m_startPos;                                               // 0x002C(0x000C)
	struct Vector                                      m_endPos;                                                 // 0x0038(0x000C)
	int                                                m_weaponClassIndex;                                       // 0x0044(0x0004)
	int                                                m_modBitfield;                                            // 0x0048(0x0004)
	int                                                m_projectileTrailIndex;                                   // 0x004C(0x0004)
	int                                                m_impactEffectTable;                                      // 0x0050(0x0004)
};

//class RecvTable.DT_Projectile
class DT_Projectile
{
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	int                                                m_iTeamNum;                                               // 0x044C(0x0004)
	struct Vector                                      m_vecVelocity;                                            // 0x0488(0x000C)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
	int                                                m_CollisionGroup;                                         // 0x0540(0x0004)
	int                                                m_PredictableID;                                          // 0x07CC(0x0004)
	struct BitMask                                     m_realmsBitMask;                                          // 0x0A48(0x0008)
	int                                                m_weaponDataIsSet;                                        // 0x1640(0x0001)
	int                                                m_forceAdjustToGunBarrelDisabled;                         // 0x1641(0x0001)
	int                                                m_weaponClassIndex;                                       // 0x1644(0x0004)
	float                                              m_destructionDistance;                                    // 0x1648(0x0004)
	int                                                m_passThroughDepthTotal;                                  // 0x164C(0x0004)
	int                                                m_modBitfield;                                            // 0x1650(0x0004)
	int                                                m_overrideMods;                                           // 0x1654(0x0004)
	int                                                m_projectileTrailIndex;                                   // 0x1658(0x0004)
	int                                                m_impactEffectTable;                                      // 0x165C(0x0004)
	int                                                m_reducedEffects;                                         // 0x1660(0x0001)
	struct Time                                        m_projectileCreationTimeServer;                           // 0x1664(0x0004)
	int                                                m_weaponSource;                                           // 0x1668(0x0004)
	int                                                m_passThroughModCount;                                    // 0x166C(0x0004)
	struct DataTable                                   m_passThroughPoints;                                      // 0x1670(0x0000)
	struct DataTable                                   m_preModdedTrailEffectIndices1p;                          // 0x167C(0x0000)
	struct DataTable                                   m_preModdedTrailEffectIndices3p;                          // 0x1680(0x0000)
	struct Vector                                      m_launchOrigin;                                           // 0x1684(0x000C)
};

//class RecvTable.DT_Missile
class DT_Missile
{
	struct DataTable                                   DT_Missile;                                               // 0x0000(0x0000)
	int                                                m_hSpecificTarget;                                        // 0x2E64(0x0004)
	struct Vector                                      m_targetPosition;                                         // 0x2E74(0x000C)
	int                                                m_useTargetPosition;                                      // 0x2E80(0x0001)
};

//class RecvTable.DT_CrossbowBolt
class DT_CrossbowBolt
{
	struct DataTable                                   DT_CrossbowBolt;                                          // 0x0000(0x0000)
};

//class RecvTable.DT_VortexSphere
class DT_VortexSphere
{
	struct DataTable                                   DT_VortexSphere;                                          // 0x0000(0x0000)
	int                                                m_spawnflags;                                             // 0x0094(0x0004)
	int                                                m_iHealth;                                                // 0x043C(0x0004)
	int                                                m_iMaxHealth;                                             // 0x0578(0x0004)
	int                                                m_enabled;                                                // 0x0A60(0x0001)
	float                                              m_radius;                                                 // 0x0A64(0x0004)
	float                                              m_height;                                                 // 0x0A68(0x0004)
	float                                              m_bulletFov;                                              // 0x0A6C(0x0004)
	int                                                m_bulletAbsorbedCount;                                    // 0x0A70(0x0004)
	int                                                m_projectileAbsorbedCount;                                // 0x0A74(0x0004)
	int                                                m_ownerWeapon;                                            // 0x0A78(0x0004)
	int                                                m_vortexEffect;                                           // 0x0A7C(0x0004)
	struct Vector                                      m_vortexLocalAngles;                                      // 0x0A80(0x000C)
	string                                             m_gunAttachment;                                          // 0x0A90(0x0000)
};

//class RecvTable.DT_OverlayVars
class DT_OverlayVars
{
	struct DataTable                                   m_AnimOverlay;                                            // 0x1648(0x0000)
	int                                                m_AnimOverlayCount;                                       // 0x1720(0x0004)
};

//class RecvTable.DT_BaseAnimatingOverlay
class DT_BaseAnimatingOverlay
{
	struct DataTable                                   DT_BaseAnimatingOverlay;                                  // 0x0000(0x0000)
	struct DataTable                                   overlay_vars;                                             // 0x0000(0x0000)
	struct DataTable                                   m_animOverlayIsActive;                                    // 0x0008(0x0000)
	struct DataTable                                   m_animOverlayStartTime;                                   // 0x0014(0x0000)
	struct DataTable                                   m_animOverlayStartCycle;                                  // 0x0038(0x0000)
	struct DataTable                                   m_animOverlayPlaybackRate;                                // 0x005C(0x0000)
	struct DataTable                                   m_animOverlayModelIndex;                                  // 0x0080(0x0000)
	struct DataTable                                   m_animOverlaySequence;                                    // 0x00A4(0x0000)
	struct DataTable                                   m_animOverlayWeight;                                      // 0x00B8(0x0000)
	struct DataTable                                   m_animOverlayOrder;                                       // 0x00DC(0x0000)
	struct DataTable                                   m_animOverlayAnimTime;                                    // 0x0100(0x0000)
	struct DataTable                                   m_animOverlayFadeInDuration;                              // 0x0124(0x0000)
	struct DataTable                                   m_animOverlayFadeOutDuration;                             // 0x0148(0x0000)
};

//class RecvTable.DT_Turret
class DT_Turret
{
	struct DataTable                                   DT_Turret;                                                // 0x0000(0x0000)
	int                                                m_iHealth;                                                // 0x043C(0x0004)
	int                                                m_iMaxHealth;                                             // 0x0578(0x0004)
	struct DataTable                                   m_overlayEventParity;                                     // 0x1751(0x0000)
	int                                                m_settingsIndex;                                          // 0x1988(0x0004)
	int                                                m_driver;                                                 // 0x199C(0x0004)
	float                                              m_forceAimPitch;                                          // 0x19C4(0x0004)
	float                                              m_forceAimYaw;                                            // 0x19C8(0x0004)
	float                                              m_driverDetachTime;                                       // 0x19CC(0x0004)
	int                                                m_driverState;                                            // 0x19D0(0x0004)
	int                                                m_turretWeapon;                                           // 0x19D4(0x0004)
	string                                             m_title;                                                  // 0x19E0(0x0000)
};

//class RecvTable.DT_ScriptTraceVolume
class DT_ScriptTraceVolume
{
	struct DataTable                                   DT_ScriptTraceVolume;                                     // 0x0000(0x0000)
	int                                                m_shapeType;                                              // 0x0A60(0x0004)
	float                                              m_sphereRadius;                                           // 0x0A64(0x0004)
	struct Vector                                      m_boxMins;                                                // 0x0A68(0x000C)
	struct Vector                                      m_boxMaxs;                                                // 0x0A74(0x000C)
	int                                                m_drawDebug;                                              // 0x0A80(0x0001)
};

//class RecvTable.DT_GrappleHook
class DT_GrappleHook
{
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	int                                                m_visibilityFlags;                                        // 0x0444(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
	struct BitMask                                     m_realmsBitMask;                                          // 0x0A48(0x0008)
	int                                                m_grappleZipline;                                         // 0x1640(0x0004)
};

//class RecvTable.DT_FirstPersonProxy
class DT_FirstPersonProxy
{
	struct DataTable                                   DT_FirstPersonProxy;                                      // 0x0000(0x0000)
	int                                                m_viewModelOwner;                                         // 0x1670(0x0004)
};

//class RecvTable.DT_PredictedFirstPersonProxy
class DT_PredictedFirstPersonProxy
{
	struct DataTable                                   DT_PredictedFirstPersonProxy;                             // 0x0000(0x0000)
};

//class RecvTable.DT_BreakableProp
class DT_BreakableProp
{
	struct DataTable                                   DT_BreakableProp;                                         // 0x0000(0x0000)
};

//class RecvTable.DT_DynamicProp
class DT_DynamicProp
{
	struct DataTable                                   DT_DynamicProp;                                           // 0x0000(0x0000)
	int                                                m_iTeamNum;                                               // 0x044C(0x0004)
	int                                                m_lifeState;                                              // 0x0798(0x0001)
	int                                                m_bUseHitboxesForRenderBox;                               // 0x1641(0x0001)
	int                                                m_bAnimateInStaticShadow;                                 // 0x1642(0x0001)
};

//class RecvTable.DT_Titan_Cockpit
class DT_Titan_Cockpit
{
	struct DataTable                                   DT_Titan_Cockpit;                                         // 0x0000(0x0000)
};

//class RecvTable.DT_PortalPointPush
class DT_PortalPointPush
{
	struct DataTable                                   DT_PortalPointPush;                                       // 0x0000(0x0000)
	int                                                m_bEnabled;                                               // 0x0A60(0x0001)
	float                                              m_flMagnitude;                                            // 0x0A64(0x0004)
	float                                              m_flRadius;                                               // 0x0A68(0x0004)
	float                                              m_flInnerRadius;                                          // 0x0A6C(0x0004)
	float                                              m_flConeOfInfluence;                                      // 0x0A70(0x0004)
};

//class RecvTable.DT_InfoPlacementHelper
class DT_InfoPlacementHelper
{
	struct Vector                                      m_localOrigin;                                            // 0x0004(0x000C)
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
};

//class RecvTable.DT_MinimapBaseEntityData
class DT_MinimapBaseEntityData
{
	struct DataTable                                   visibilityDefaultFlag;                                    // 0x0000(0x0000)
	struct DataTable                                   visibilityShowFlag;                                       // 0x0020(0x0000)
	int                                                flags;                                                    // 0x0040(0x0004)
	int                                                zOrder;                                                   // 0x0044(0x0004)
	int                                                customState;                                              // 0x0048(0x0004)
	float                                              objectScale;                                              // 0x004C(0x0004)
};

//class RecvTable.DT_HealthKit
class DT_HealthKit
{
	struct DataTable                                   DT_HealthKit;                                             // 0x0000(0x0000)
	struct DataTable                                   m_minimapData;                                            // 0x0968(0x0000)
};

//class RecvTable.DT_BaseParticleEntity
class DT_BaseParticleEntity
{
	struct DataTable                                   DT_BaseParticleEntity;                                    // 0x0000(0x0000)
};

//class RecvTable.DT_BaseToggle
class DT_BaseToggle
{
	struct DataTable                                   DT_BaseToggle;                                            // 0x0000(0x0000)
	struct Vector                                      m_vecFinalDest;                                           // 0x0A74(0x000C)
	int                                                m_movementType;                                           // 0x0A80(0x0004)
	struct Time                                        m_flMoveTargetTime;                                       // 0x0A84(0x0004)
};

//class RecvTable.DT_BaseTrigger
class DT_BaseTrigger
{
	struct DataTable                                   DT_BaseTrigger;                                           // 0x0000(0x0000)
	int                                                m_spawnflags;                                             // 0x0094(0x0004)
	int                                                m_bClientSidePredicted;                                   // 0x0A90(0x0001)
};

//class RecvTable.DT_TriggerSlip
class DT_TriggerSlip
{
	struct DataTable                                   DT_TriggerSlip;                                           // 0x0000(0x0000)
	struct Vector                                      m_defaultSlipDirection;                                   // 0x0AA0(0x000C)
	float                                              m_slipSpeed;                                              // 0x0AAC(0x0004)
	float                                              m_slipAcceleration;                                       // 0x0AB0(0x0004)
};

//class RecvTable.DT_TriggerPlayerMovement
class DT_TriggerPlayerMovement
{
	struct DataTable                                   DT_TriggerPlayerMovement;                                 // 0x0000(0x0000)
};

//class RecvTable.DT_TriggerPointGravity
class DT_TriggerPointGravity
{
	struct DataTable                                   DT_TriggerPointGravity;                                   // 0x0000(0x0000)
	float                                              m_pullOuterRadius;                                        // 0x0AA0(0x0004)
	float                                              m_pullInnerRadius;                                        // 0x0AA4(0x0004)
	float                                              m_reduceSpeedOuterRadius;                                 // 0x0AA8(0x0004)
	float                                              m_reduceSpeedInnerRadius;                                 // 0x0AAC(0x0004)
	float                                              m_pullAccel;                                              // 0x0AB0(0x0004)
	float                                              m_pullSpeed;                                              // 0x0AB4(0x0004)
	int                                                m_constantPullStregnth;                                   // 0x0AB8(0x0001)
};

//class RecvTable.DT_TriggerCylinderHeavy
class DT_TriggerCylinderHeavy
{
	struct DataTable                                   DT_TriggerCylinderHeavy;                                  // 0x0000(0x0000)
	struct BitMask                                     m_triggerFilterMask;                                      // 0x0AA0(0x0008)
	float                                              m_radius;                                                 // 0x0AA8(0x0004)
	float                                              m_aboveHeight;                                            // 0x0AAC(0x0004)
	float                                              m_belowHeight;                                            // 0x0AB0(0x0004)
	int                                                m_triggerType;                                            // 0x0AB4(0x0004)
	float                                              m_vertOverride;                                           // 0x0AB8(0x0004)
	float                                              m_launchPower;                                            // 0x0ABC(0x0004)
	float                                              m_punchSoftAmount;                                        // 0x0AC0(0x0004)
	float                                              m_punchHardAmount;                                        // 0x0AC4(0x0004)
	float                                              m_punchRandomBoost;                                       // 0x0AC8(0x0004)
	float                                              m_nextLaunchTime;                                         // 0x0ACC(0x0004)
	int                                                m_gravityCannonLaunched;                                  // 0x0AD0(0x0001)
	float                                              m_launchFlightTime;                                       // 0x0AD4(0x0004)
	float                                              m_launchDelayAmount;                                      // 0x0AD8(0x0004)
	int                                                m_enableDoubleJump;                                       // 0x0ADC(0x0001)
	float                                              m_gravityLiftUpSpeed;                                     // 0x0AE0(0x0004)
	float                                              m_gravityLiftMoveSpeed;                                   // 0x0AE4(0x0004)
	float                                              m_gravityLiftMoveAccel;                                   // 0x0AE8(0x0004)
	float                                              m_gravityLiftToCenterSpeed;                               // 0x0AEC(0x0004)
	float                                              m_gravityLiftToCenterAccel;                               // 0x0AF0(0x0004)
	float                                              m_gravityLiftEjectUpSpeed;                                // 0x0AF4(0x0004)
	float                                              m_gravityLiftEjectForwardSpeed;                           // 0x0AF8(0x0004)
	float                                              m_gravityLiftMaxEjectTime;                                // 0x0AFC(0x0004)
	float                                              m_gravityLiftMaxHoverTime;                                // 0x0B00(0x0004)
	int                                                m_blackholeIsStrongPulling;                               // 0x0B04(0x0001)
	float                                              m_blackholeStrongPullAddlSpeed;                           // 0x0B08(0x0004)
	float                                              m_blackholeOuterPullSpeed;                                // 0x0B0C(0x0004)
	float                                              m_blackholeInnerPullSpeed;                                // 0x0B10(0x0004)
	float                                              m_blackholeOuterMoveSpeed;                                // 0x0B14(0x0004)
	float                                              m_blackholeInnerMoveSpeed;                                // 0x0B18(0x0004)
	float                                              m_blackholeInnerRadius;                                   // 0x0B1C(0x0004)
	int                                                m_teslaTrapFXVisible;                                     // 0x0B20(0x0001)
	float                                              m_teslaTrapBaseHeight;                                    // 0x0B24(0x0004)
	struct Time                                        m_teslaTrapObstructedEndTime;                             // 0x0B2C(0x0004)
	int                                                m_teslaTrapStart;                                         // 0x0B30(0x0004)
	int                                                m_teslaTrapEnd;                                           // 0x0B34(0x0004)
	struct Vector                                      m_teslaTrapUp;                                            // 0x0B38(0x000C)
	struct Vector                                      m_launchDir;                                              // 0x0B44(0x000C)
	int                                                m_mortarRingSegementStart;                                // 0x0B58(0x0004)
	int                                                m_mortarRingSegementEnd;                                  // 0x0B5C(0x0004)
};

//class RecvTable.DT_StatusEffectPlugin
class DT_StatusEffectPlugin
{
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
	struct DataTable                                   m_statusEffectsTimedPluginNV;                             // 0x0A60(0x0000)
	struct DataTable                                   m_statusEffectsEndlessPluginNV;                           // 0x0A78(0x0000)
};

//class RecvTable.DT_ScriptMoverTrainNode
class DT_ScriptMoverTrainNode
{
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_scriptNameIndex;                                        // 0x0690(0x0004)
	int                                                m_firstChildEntityLink;                                   // 0x0A40(0x0004)
	int                                                m_firstParentEntityLink;                                  // 0x0A44(0x0004)
	int                                                m_numSmoothPoints;                                        // 0x0A60(0x0004)
	int                                                m_trainNodeMakeSmoothPointsParity;                        // 0x0A64(0x0001)
	int                                                m_tangentType;                                            // 0x0A68(0x0004)
	int                                                m_perfectCircularRotation;                                // 0x0A6C(0x0001)
};

//class RecvTable.DT_DoorMover
class DT_DoorMover
{
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_fEffects;                                               // 0x0040(0x0004)
	int                                                m_usableType;                                             // 0x0044(0x0004)
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	struct Vector                                      m_vecAngVelocity;                                         // 0x0128(0x000C)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	struct Vector                                      m_vecVelocity;                                            // 0x0488(0x000C)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	struct DataTable                                   m_Collision;                                              // 0x04C0(0x0000)
	int                                                m_CollisionGroup;                                         // 0x0540(0x0004)
	string                                             m_iSignifierName;                                         // 0x0580(0x0000)
	int                                                m_scriptNameIndex;                                        // 0x0690(0x0004)
	string                                             m_holdUsePrompt;                                          // 0x0718(0x0000)
	string                                             m_pressUsePrompt;                                         // 0x0720(0x0000)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
	float                                              m_fadeDist;                                               // 0x0864(0x0004)
	int                                                m_usablePriority;                                         // 0x0924(0x0004)
	float                                              m_usableDistanceOverride;                                 // 0x0928(0x0004)
	float                                              m_usableFOV;                                              // 0x092C(0x0004)
	float                                              m_usePromptSize;                                          // 0x0930(0x0004)
	int                                                m_doorFlags;                                              // 0x1870(0x0004)
};

//class RecvTable.DT_ScriptMoverLightweight
class DT_ScriptMoverLightweight
{
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_fEffects;                                               // 0x0040(0x0004)
	int                                                m_moverNetworkCellX;                                      // 0x0048(0x0004)
	int                                                m_moverNetworkCellY;                                      // 0x004C(0x0004)
	int                                                m_moverNetworkCellZ;                                      // 0x0050(0x0004)
	struct Vector                                      m_moverNetworkLocalOrigin;                                // 0x0054(0x000C)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	struct Vector                                      m_moverNetworkAngularVelocity;                            // 0x0128(0x000C)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	struct Vector                                      m_moverNetworkLinearVelocity;                             // 0x0488(0x000C)
	struct Vector                                      m_moverNetworkLocalAngles;                                // 0x0494(0x000C)
	int                                                m_scriptNameIndex;                                        // 0x0690(0x0004)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
	float                                              m_fadeDist;                                               // 0x0864(0x0004)
	int                                                m_moveModeNonPhysics;                                     // 0x1764(0x0004)
	int                                                m_moveModeIsLocal;                                        // 0x1768(0x0001)
	struct Vector                                      m_moveToStartPos;                                         // 0x176C(0x000C)
	struct Vector                                      m_moveToEndPos;                                           // 0x1778(0x000C)
	struct Time                                        m_moveToTimeStart;                                        // 0x1784(0x0004)
	struct Time                                        m_moveToTimeEnd;                                          // 0x1788(0x0004)
	float                                              m_moveToTimeEaseIn;                                       // 0x178C(0x0004)
	float                                              m_moveToTimeEaseOut;                                      // 0x1790(0x0004)
	struct Vector                                      m_moveVelocity;                                           // 0x1794(0x000C)
	struct Vector                                      m_moveGravity;                                            // 0x17A0(0x000C)
	struct Time                                        m_trainStartTime;                                         // 0x17AC(0x0004)
	struct Time                                        m_trainStopTime;                                          // 0x17B0(0x0004)
	float                                              m_trainStartDistance;                                     // 0x17B4(0x0004)
	int                                                m_trainCurrentNode;                                       // 0x17B8(0x0004)
	int                                                m_trainStopNode;                                          // 0x17BC(0x0004)
	float                                              m_trainInitialSpeed;                                      // 0x17C0(0x0004)
	float                                              m_trainGoalSpeed;                                         // 0x17C4(0x0004)
	float                                              m_trainAcceleration;                                      // 0x17C8(0x0004)
	int                                                m_trainLastNode;                                          // 0x17CC(0x0004)
	float                                              m_trainLastDistance;                                      // 0x17D0(0x0004)
	float                                              m_trainLastSpeed;                                         // 0x17D4(0x0004)
	int                                                m_trainFollowMover;                                       // 0x17D8(0x0004)
	float                                              m_trainFollowDistance;                                    // 0x17DC(0x0004)
	struct DataTable                                   m_trainBreadcrumb;                                        // 0x17E0(0x0000)
	int                                                m_trainBreadcrumbBegin;                                   // 0x1800(0x0004)
	int                                                m_trainBreadcrumbCount;                                   // 0x1804(0x0004)
	float                                              m_trainAutoRollStrength;                                  // 0x1808(0x0004)
	float                                              m_trainAutoRollLookAheadDistance;                         // 0x180C(0x0004)
	float                                              m_trainAutoRollMax;                                       // 0x1810(0x0004)
	int                                                m_trainSimulateBeforeMeEntity;                            // 0x1814(0x0004)
	int                                                m_rotateModeNonPhysics;                                   // 0x1818(0x0004)
	int                                                m_rotateModeIsLocal;                                      // 0x181C(0x0001)
	struct Vector                                      m_RotateToAnglesStart;                                    // 0x1820(0x000C)
	struct Vector                                      m_RotateToAnglesEnd;                                      // 0x182C(0x000C)
	struct Time                                        m_rotateToTimeStart;                                      // 0x1838(0x0004)
	struct Time                                        m_rotateToTimeEnd;                                        // 0x183C(0x0004)
	float                                              m_rotateToTimeEaseIn;                                     // 0x1840(0x0004)
	float                                              m_rotateToTimeEaseOut;                                    // 0x1844(0x0004)
	struct Vector                                      m_rotateAxis;                                             // 0x1848(0x000C)
	float                                              m_rotateSpeed;                                            // 0x1854(0x0004)
	float                                              m_trainPitchMax;                                          // 0x1858(0x0004)
	int                                                m_useNonPhysicsMoveInterpolation;                         // 0x1874(0x0001)
};

//class RecvTable.DT_ScriptProp
class DT_ScriptProp
{
	struct DataTable                                   DT_ScriptProp;                                            // 0x0000(0x0000)
	float                                              m_cloakEndTime;                                           // 0x019C(0x0004)
	struct Time                                        m_cloakFadeInEndTime;                                     // 0x01A0(0x0004)
	float                                              m_cloakFadeOutStartTime;                                  // 0x01A4(0x0004)
	float                                              m_cloakFadeInDuration;                                    // 0x01A8(0x0004)
	float                                              m_cloakFlickerAmount;                                     // 0x01AC(0x0004)
	struct Time                                        m_cloakFlickerEndTime;                                    // 0x01B0(0x0004)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	int                                                m_iHealth;                                                // 0x043C(0x0004)
	int                                                m_iMaxHealth;                                             // 0x0578(0x0004)
	struct DataTable                                   m_minimapData;                                            // 0x0968(0x0000)
	int                                                m_nameVisibilityFlags;                                    // 0x09B8(0x0004)
	string                                             m_title;                                                  // 0x16A0(0x0000)
	string                                             m_footstepType;                                           // 0x16C0(0x0000)
	int                                                m_renderColorFriendlyIsValid;                             // 0x1700(0x0001)
	int                                                m_renderColorFriendly;                                    // 0x1701(0x0004)
	int                                                m_armorType;                                              // 0x1708(0x0004)
	int                                                m_scriptPropFlags;                                        // 0x170C(0x0004)
	int                                                m_scriptPropSmartAmmoLockType;                            // 0x1710(0x0004)
};

//class RecvTable.DT_ScriptMover
class DT_ScriptMover
{
	struct DataTable                                   DT_ScriptMover;                                           // 0x0000(0x0000)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	struct Vector                                      m_vecAngVelocity;                                         // 0x0128(0x000C)
	struct Vector                                      m_vecVelocity;                                            // 0x0488(0x000C)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
};

//class RecvTable.DT_ScriptNetData
class DT_ScriptNetData
{
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
};

//class RecvTable.DT_ScriptNetData_SNDC_GLOBAL_NON_REWIND
class DT_ScriptNetData_SNDC_GLOBAL_NON_REWIND
{
	struct DataTable                                   DT_ScriptNetData_SNDC_GLOBAL_NON_REWIND;                  // 0x0000(0x0000)
	struct Array                                       m_bools;                                                  // 0x0000(0x0012)
	struct Array                                       m_ranges;                                                 // 0x0000(0x0044)
	struct Array                                       m_int32s;                                                 // 0x0000(0x0028)
	struct Array                                       m_times;                                                  // 0x0000(0x0068)
	struct Array                                       m_entities;                                               // 0x0000(0x0048)
};

//class RecvTable.DT_ScriptNetDataGlobalNonRewind
class DT_ScriptNetDataGlobalNonRewind
{
	struct DataTable                                   DT_ScriptNetDataGlobalNonRewind;                          // 0x0000(0x0000)
};

//class RecvTable.DT_ScriptNetData_SNDC_GLOBAL
class DT_ScriptNetData_SNDC_GLOBAL
{
	struct DataTable                                   DT_ScriptNetData_SNDC_GLOBAL;                             // 0x0000(0x0000)
	struct Array                                       m_bools;                                                  // 0x0000(0x0012)
	struct Array                                       m_ranges;                                                 // 0x0000(0x0044)
	struct Array                                       m_int32s;                                                 // 0x0000(0x0028)
	struct Array                                       m_times;                                                  // 0x0000(0x0068)
	struct Array                                       m_entities;                                               // 0x0000(0x0048)
};

//class RecvTable.DT_ScriptNetDataGlobal
class DT_ScriptNetDataGlobal
{
	struct DataTable                                   DT_ScriptNetDataGlobal;                                   // 0x0000(0x0000)
};

//class RecvTable.DT_ScriptNetData_SNDC_DEATH_BOX
class DT_ScriptNetData_SNDC_DEATH_BOX
{
	struct DataTable                                   DT_ScriptNetData_SNDC_DEATH_BOX;                          // 0x0000(0x0000)
	struct Array                                       m_bools;                                                  // 0x0000(0x0004)
	struct Array                                       m_ranges;                                                 // 0x0000(0x0024)
	struct Array                                       m_int32s;                                                 // 0x0000(0x000C)
	struct Array                                       m_times;                                                  // 0x0000(0x000C)
	struct Array                                       m_entities;                                               // 0x0000(0x000C)
};

//class RecvTable.DT_ScriptNetData_SNDC_TITAN_SOUL
class DT_ScriptNetData_SNDC_TITAN_SOUL
{
	struct DataTable                                   DT_ScriptNetData_SNDC_TITAN_SOUL;                         // 0x0000(0x0000)
	struct Array                                       m_bools;                                                  // 0x0000(0x000A)
	struct Array                                       m_ranges;                                                 // 0x0000(0x0024)
	struct Array                                       m_int32s;                                                 // 0x0000(0x0010)
	struct Array                                       m_times;                                                  // 0x0000(0x0028)
	struct Array                                       m_entities;                                               // 0x0000(0x0018)
};

//class RecvTable.DT_ScriptNetData_SNDC_PLAYER_EXCLUSIVE_EXPANDED
class DT_ScriptNetData_SNDC_PLAYER_EXCLUSIVE_EXPANDED
{
	struct DataTable                                   DT_ScriptNetData_SNDC_PLAYER_EXCLUSIVE_EXPANDED;          // 0x0000(0x0000)
	struct Array                                       m_bools;                                                  // 0x0000(0x001A)
	struct Array                                       m_ranges;                                                 // 0x0000(0x00BC)
	struct Array                                       m_int32s;                                                 // 0x0000(0x0018)
	struct Array                                       m_times;                                                  // 0x0000(0x0028)
	struct Array                                       m_entities;                                               // 0x0000(0x0028)
};

//class RecvTable.DT_ScriptNetData_SNDC_PLAYER_EXCLUSIVE
class DT_ScriptNetData_SNDC_PLAYER_EXCLUSIVE
{
	struct DataTable                                   DT_ScriptNetData_SNDC_PLAYER_EXCLUSIVE;                   // 0x0000(0x0000)
	struct Array                                       m_bools;                                                  // 0x0000(0x001A)
	struct Array                                       m_ranges;                                                 // 0x0000(0x0044)
	struct Array                                       m_int32s;                                                 // 0x0000(0x0018)
	struct Array                                       m_times;                                                  // 0x0000(0x0028)
	struct Array                                       m_entities;                                               // 0x0000(0x0028)
};

//class RecvTable.DT_ScriptNetData_SNDC_PLAYER_GLOBAL
class DT_ScriptNetData_SNDC_PLAYER_GLOBAL
{
	struct DataTable                                   DT_ScriptNetData_SNDC_PLAYER_GLOBAL;                      // 0x0000(0x0000)
	struct Array                                       m_bools;                                                  // 0x0000(0x0012)
	struct Array                                       m_ranges;                                                 // 0x0000(0x0044)
	struct Array                                       m_int32s;                                                 // 0x0000(0x0038)
	struct Array                                       m_times;                                                  // 0x0000(0x0028)
	struct Array                                       m_entities;                                               // 0x0000(0x0018)
};

//class RecvTable.DT_RopeKeyframe
class DT_RopeKeyframe
{
	struct Vector                                      m_localOrigin;                                            // 0x0004(0x000C)
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_clrRender;                                              // 0x0050(0x0004)
	int                                                m_visibilityFlags;                                        // 0x0444(0x0004)
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
	int                                                m_nRenderMode;                                            // 0x04B9(0x0001)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
	float                                              m_fadeDist;                                               // 0x0864(0x0004)
	float                                              m_ropeZiplineAutoDetachDistance;                          // 0x0A60(0x0004)
	int                                                m_ziplineSagEnable;                                       // 0x0A64(0x0001)
	float                                              m_ziplineSagHeight;                                       // 0x0A68(0x0004)
	float                                              m_ziplineMoveSpeedScale;                                  // 0x0B60(0x0004)
	struct Vector                                      m_startOffset;                                            // 0x0B64(0x000C)
	struct Vector                                      m_endOffset;                                              // 0x0B70(0x000C)
	struct Time                                        m_wiggleFadeStartTime;                                    // 0x0B7C(0x0004)
	struct Time                                        m_wiggleEndTime;                                          // 0x0B80(0x0004)
	float                                              m_wiggleMaxLen;                                           // 0x0B84(0x0004)
	float                                              m_wiggleMagnitude;                                        // 0x0B88(0x0004)
	float                                              m_wiggleSpeed;                                            // 0x0B8C(0x0004)
	float                                              m_flScrollSpeed;                                          // 0x0BC4(0x0004)
	int                                                m_RopeFlags;                                              // 0x0BC8(0x0004)
	int                                                m_iRopeMaterialModelIndex;                                // 0x0BCC(0x0004)
	int                                                m_nSegments;                                              // 0x0E50(0x0004)
	int                                                m_hStartPoint;                                            // 0x0E54(0x0004)
	int                                                m_hEndPoint;                                              // 0x0E58(0x0004)
	int                                                m_hPrevPoint;                                             // 0x0E5C(0x0004)
	int                                                m_iStartAttachment;                                       // 0x0E60(0x0001)
	int                                                m_iEndAttachment;                                         // 0x0E61(0x0001)
	int                                                m_subdivStackCount;                                       // 0x0E8C(0x0004)
	int                                                m_subdivSliceCount;                                       // 0x0E90(0x0004)
	int                                                m_ropeLength;                                             // 0x0E94(0x0004)
	int                                                m_constraintIterations;                                   // 0x0E9C(0x0004)
	float                                              m_ropeDampening;                                          // 0x0EA0(0x0004)
	int                                                m_Slack;                                                  // 0x0EA4(0x0004)
	float                                              m_TextureScale;                                           // 0x0EA8(0x0004)
	float                                              m_TextureScale;                                           // 0x0EA8(0x0004)
	int                                                m_fLockedPoints;                                          // 0x0EAC(0x0004)
	int                                                m_lockDirectionCutoffLength;                              // 0x0EB0(0x0004)
	float                                              m_lockDirectionStrength;                                  // 0x0EB4(0x0004)
	int                                                m_nChangeCount;                                           // 0x0EB8(0x0004)
	float                                              m_Width;                                                  // 0x0EBC(0x0004)
	int                                                m_bConstrainBetweenEndpoints;                             // 0x0F50(0x0001)
};

//class RecvTable.DT_PlayerWaypoint
class DT_PlayerWaypoint
{
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	int                                                m_visibilityFlags;                                        // 0x0444(0x0004)
	int                                                m_iTeamNum;                                               // 0x044C(0x0004)
	int                                                m_teamMemberIndex;                                        // 0x0454(0x0004)
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
	string                                             m_iSignifierName;                                         // 0x0580(0x0000)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
	struct BitMask                                     m_realmsBitMask;                                          // 0x0A48(0x0008)
	int                                                m_waypointType;                                           // 0x0A60(0x0004)
	int                                                m_waypointBitfield;                                       // 0x0A64(0x0004)
	struct DataTable                                   m_waypointEnts;                                           // 0x0A68(0x0000)
	struct DataTable                                   m_waypointVectors;                                        // 0x0A88(0x0000)
	struct DataTable                                   m_waypointGameTimes;                                      // 0x0AE8(0x0000)
	struct DataTable                                   m_waypointInts;                                           // 0x0B08(0x0000)
	struct DataTable                                   m_waypointFloats;                                         // 0x0B28(0x0000)
	int                                                m_objectivePackedInt;                                     // 0x0B48(0x0004)
	string                                             m_waypointGroupName;                                      // 0x0B4C(0x0000)
	int                                                m_waypointGroupFlags;                                     // 0x0B6C(0x0004)
	string                                             m_waypointCustomType;                                     // 0x0B70(0x0000)
	string                                             m_waypointStringA;                                        // 0x0B90(0x0000)
	string                                             m_waypointStringB;                                        // 0x0BD0(0x0000)
	string                                             m_waypointAssetA;                                         // 0x0C18(0x0000)
	string                                             m_waypointAssetB;                                         // 0x0C98(0x0000)
};

//class RecvTable.DT_PlayerTasklist
class DT_PlayerTasklist
{
	struct DataTable                                   DT_PlayerTasklist;                                        // 0x0000(0x0000)
	struct Time                                        m_notifyTime;                                             // 0x0A60(0x0004)
	int                                                m_customInt;                                              // 0x0A64(0x0004)
	struct DataTable                                   m_taskStatus;                                             // 0x0A68(0x0000)
	struct DataTable                                   m_taskType;                                               // 0x0A9C(0x0000)
	struct DataTable                                   m_taskCountGoal;                                          // 0x0AD0(0x0000)
	struct DataTable                                   m_taskCountNow;                                           // 0x0B04(0x0000)
	struct DataTable                                   m_taskFlags;                                              // 0x0B38(0x0000)
	struct DataTable                                   m_taskGameTimes;                                          // 0x0B6C(0x0000)
	struct DataTable                                   m_taskInts;                                               // 0x0BA0(0x0000)
	struct DataTable                                   m_taskFloats;                                             // 0x0BD4(0x0000)
	struct DataTable                                   m_taskEnts;                                               // 0x0C08(0x0000)
	string                                             m_taskStringA;                                            // 0x0C3C(0x0000)
	string                                             m_taskStringB;                                            // 0x0C7C(0x0000)
	string                                             m_taskStringC;                                            // 0x0CBC(0x0000)
	string                                             m_taskStringD;                                            // 0x0CFC(0x0000)
	string                                             m_taskStringE;                                            // 0x0D3C(0x0000)
	string                                             m_taskStringF;                                            // 0x0D7C(0x0000)
	string                                             m_taskStringG;                                            // 0x0DBC(0x0000)
	string                                             m_taskStringH;                                            // 0x0DFC(0x0000)
	string                                             m_taskStringI;                                            // 0x0E3C(0x0000)
	string                                             m_taskStringJ;                                            // 0x0E7C(0x0000)
	string                                             m_taskStringK;                                            // 0x0EBC(0x0000)
	string                                             m_taskStringL;                                            // 0x0EFC(0x0000)
	string                                             m_taskStringM;                                            // 0x0F3C(0x0000)
};

//class RecvTable.DT_EnvDecoy
class DT_EnvDecoy
{
	struct DataTable                                   DT_EnvDecoy;                                              // 0x0000(0x0000)
};

//class RecvTable.DT_PlayerDecoy
class DT_PlayerDecoy
{
	struct DataTable                                   DT_PlayerDecoy;                                           // 0x0000(0x0000)
	float                                              m_vecViewOffset.x;                                        // 0x0034(0x0004)
	float                                              m_vecViewOffset.y;                                        // 0x0038(0x0004)
	float                                              m_vecViewOffset.z;                                        // 0x003C(0x0004)
	float                                              m_cloakEndTime;                                           // 0x019C(0x0004)
	struct Time                                        m_cloakFadeInEndTime;                                     // 0x01A0(0x0004)
	float                                              m_cloakFadeOutStartTime;                                  // 0x01A4(0x0004)
	float                                              m_cloakFadeInDuration;                                    // 0x01A8(0x0004)
	float                                              m_cloakFlickerAmount;                                     // 0x01AC(0x0004)
	struct Time                                        m_cloakFlickerEndTime;                                    // 0x01B0(0x0004)
	int                                                m_iHealth;                                                // 0x043C(0x0004)
	int                                                m_iMaxHealth;                                             // 0x0578(0x0004)
	int                                                m_nameVisibilityFlags;                                    // 0x09B8(0x0004)
	int                                                m_currentState;                                           // 0x1640(0x0004)
	int                                                m_decoyFlags;                                             // 0x1644(0x0004)
	struct Time                                        m_lastPulseTime;                                          // 0x164C(0x0004)
	struct BitMask                                     m_currentClass;                                           // 0x1650(0x0008)
	struct BitMask                                     m_classModsActive;                                        // 0x1658(0x0008)
	struct Vector                                      m_decoyVelocity;                                          // 0x1660(0x000C)
};

//class RecvTable.DT_GlobalNonRewinding
class DT_GlobalNonRewinding
{
	struct DataTable                                   m_playerObserver;                                         // 0x0A60(0x0000)
	struct DataTable                                   m_playerMiscData;                                         // 0x0E60(0x0000)
};

//class RecvTable.DT_EntityBlocker
class DT_EntityBlocker
{
	struct DataTable                                   DT_EntityBlocker;                                         // 0x0000(0x0000)
};

//class RecvTable.DT_TEScriptParticleSystemOnEntity
class DT_TEScriptParticleSystemOnEntity
{
	struct DataTable                                   DT_TEScriptParticleSystemOnEntity;                        // 0x0000(0x0000)
	int                                                m_effectIndex;                                            // 0x0028(0x0004)
	int                                                m_ent;                                                    // 0x002C(0x0004)
	int                                                m_attachType;                                             // 0x0030(0x0004)
	int                                                m_attachType2;                                            // 0x0034(0x0004)
	int                                                m_attachmentId;                                           // 0x0038(0x0001)
	int                                                m_attachmentId2;                                          // 0x0039(0x0001)
};

//class RecvTable.DT_TEScriptParticleSystemOnEntityWithPos
class DT_TEScriptParticleSystemOnEntityWithPos
{
	struct DataTable                                   DT_TEScriptParticleSystemOnEntityWithPos;                 // 0x0000(0x0000)
	struct Vector                                      m_origin;                                                 // 0x0040(0x000C)
	struct Vector                                      m_angles;                                                 // 0x004C(0x000C)
};

//class RecvTable.DT_TEScriptParticleSystem
class DT_TEScriptParticleSystem
{
	struct DataTable                                   DT_TEScriptParticleSystem;                                // 0x0000(0x0000)
	int                                                m_effectIndex;                                            // 0x0028(0x0004)
	struct Vector                                      m_origin;                                                 // 0x002C(0x000C)
	struct Vector                                      m_angles;                                                 // 0x0038(0x000C)
	struct Vector                                      m_controlPoint1;                                          // 0x0044(0x000C)
};

//class RecvTable.DT_CPropDoor
class DT_CPropDoor
{
	struct DataTable                                   HighlightSettings;                                        // 0x0000(0x0000)
	int                                                m_fEffects;                                               // 0x0040(0x0004)
	int                                                m_usableType;                                             // 0x0044(0x0004)
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	int                                                m_iTeamNum;                                               // 0x044C(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	int                                                m_nSkin;                                                  // 0x0E50(0x0004)
	int                                                m_skinMod;                                                // 0x0E54(0x0002)
	float                                              m_closedAngle;                                            // 0x16B0(0x0004)
	float                                              m_angle;                                                  // 0x16B4(0x0004)
	float                                              m_startAngle;                                             // 0x16B8(0x0004)
	float                                              m_startAngleVel;                                          // 0x16BC(0x0004)
	struct Time                                        m_startMoveTime;                                          // 0x16C0(0x0004)
	int                                                m_isLocked;                                               // 0x16C4(0x0001)
	int                                                m_isReinforced;                                           // 0x16C5(0x0001)
	int                                                m_oppositeDoor;                                           // 0x16C8(0x0004)
	int                                                m_interactingPlayer;                                      // 0x1718(0x0004)
	int                                                m_interactingPlayerWantsOpen;                             // 0x171C(0x0001)
};

//class RecvTable.DT_InfoTarget
class DT_InfoTarget
{
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_iTeamNum;                                               // 0x044C(0x0004)
	int                                                m_bIsSoundCodeControllerValueSet;                         // 0x0480(0x0001)
	float                                              m_flSoundCodeControllerValue;                             // 0x0484(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
	string                                             m_iSignifierName;                                         // 0x0580(0x0000)
	string                                             m_iName;                                                  // 0x0589(0x0000)
	int                                                m_scriptNameIndex;                                        // 0x0690(0x0004)
	int                                                m_instanceNameIndex;                                      // 0x0694(0x0004)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
	int                                                m_firstChildEntityLink;                                   // 0x0A40(0x0004)
	int                                                m_firstParentEntityLink;                                  // 0x0A44(0x0004)
};

//class RecvTable.DT_InfoTargetGravity
class DT_InfoTargetGravity
{
	struct DataTable                                   DT_InfoTargetGravity;                                     // 0x0000(0x0000)
	int                                                m_gravityDirectionType;                                   // 0x0A60(0x0004)
	int                                                m_gravityPair;                                            // 0x0A68(0x0004)
};

//class RecvTable.DT_InfoTargetMinimap
class DT_InfoTargetMinimap
{
	struct DataTable                                   DT_InfoTargetMinimap;                                     // 0x0000(0x0000)
	struct DataTable                                   m_minimapData;                                            // 0x0968(0x0000)
};

//class RecvTable.DT_BaseViewModel
class DT_BaseViewModel
{
	struct DataTable                                   overlay_vars;                                             // 0x0000(0x0000)
	struct Time                                        m_animStartTime;                                          // 0x0008(0x0004)
	struct DataTable                                   m_animOverlayIsActive;                                    // 0x0008(0x0000)
	float                                              m_animStartCycle;                                         // 0x000C(0x0004)
	float                                              m_animPlaybackRate;                                       // 0x0010(0x0004)
	int                                                m_animModelIndex;                                         // 0x0014(0x0004)
	struct DataTable                                   m_animOverlayStartTime;                                   // 0x0014(0x0000)
	int                                                m_nNewSequenceParity;                                     // 0x0018(0x0004)
	int                                                m_animSequence;                                           // 0x0020(0x0002)
	int                                                m_animFrozen;                                             // 0x0022(0x0001)
	struct DataTable                                   m_animOverlayStartCycle;                                  // 0x0038(0x0000)
	int                                                m_fEffects;                                               // 0x0040(0x0004)
	int                                                m_clrRender;                                              // 0x0050(0x0004)
	struct DataTable                                   m_animOverlayPlaybackRate;                                // 0x005C(0x0000)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	struct DataTable                                   m_animOverlayModelIndex;                                  // 0x0080(0x0000)
	struct DataTable                                   m_animOverlaySequence;                                    // 0x00A4(0x0000)
	struct DataTable                                   m_animOverlayWeight;                                      // 0x00B8(0x0000)
	struct DataTable                                   m_animOverlayOrder;                                       // 0x00DC(0x0000)
	struct DataTable                                   m_animOverlayAnimTime;                                    // 0x0100(0x0000)
	struct DataTable                                   m_animOverlayFadeInDuration;                              // 0x0124(0x0000)
	struct DataTable                                   m_animOverlayFadeOutDuration;                             // 0x0148(0x0000)
	int                                                m_nRenderMode;                                            // 0x04B9(0x0001)
	int                                                m_nBody;                                                  // 0x0E58(0x0004)
	struct Time                                        m_nResetEventsStartTime;                                  // 0x0E64(0x0004)
	int                                                m_nResetEventsParity;                                     // 0x0E68(0x0004)
	int                                                m_bSequenceFinished;                                      // 0x0EFC(0x0001)
	float                                              m_flModelScale;                                           // 0x0F08(0x0004)
	struct DataTable                                   m_overlayEventParity;                                     // 0x1751(0x0000)
	int                                                m_viewModelOwner;                                         // 0x19D4(0x0004)
	int                                                m_projectileIsVisible;                                    // 0x19D8(0x0001)
	int                                                m_bBlockEventLayer;                                       // 0x1DD0(0x0001)
	int                                                m_isAdsTransition;                                        // 0x1DD1(0x0001)
	int                                                m_hWeapon;                                                // 0x1DD4(0x0004)
	struct DataTable                                   m_tracerAttachments;                                      // 0x1DD8(0x0000)
	struct DataTable                                   m_tracerAttachmentsScoped;                                // 0x1DDA(0x0000)
};

//class RecvTable.DT_BaseGrenade
class DT_BaseGrenade
{
	struct DataTable                                   DT_BaseGrenade;                                           // 0x0000(0x0000)
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_baseTakeDamage;                                         // 0x07BC(0x0001)
	int                                                m_invulnerableToDamageCount;                              // 0x07C0(0x0004)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
	int                                                m_doesExplode;                                            // 0x2E01(0x0001)
	float                                              m_DmgRadius;                                              // 0x2E04(0x0004)
	int                                                m_grenadeStatusFlags;                                     // 0x2E28(0x0004)
	struct Vector                                      m_ziplineGrenadeExpectedEndPosition;                      // 0x2E98(0x000C)
};

//class RecvTable.DT_World
class DT_World
{
	struct DataTable                                   DT_World;                                                 // 0x0000(0x0000)
	struct Vector                                      m_WorldMins;                                              // 0x0A60(0x000C)
	struct Vector                                      m_WorldMaxs;                                              // 0x0A6C(0x000C)
	int                                                m_bStartDark;                                             // 0x0A78(0x0001)
	int                                                m_statusEffectsGenerationNV;                              // 0x0A8C(0x0004)
	int                                                m_worldFlags;                                             // 0x0A94(0x0004)
	int                                                m_timeshiftArmDeviceSkin;                                 // 0x0A98(0x0004)
	int                                                m_spTitanLoadoutUnlocks;                                  // 0x0A9C(0x0004)
	struct DataTable                                   m_deathFieldIsActive;                                     // 0x0AA0(0x0000)
	struct DataTable                                   m_deathFieldOrigin;                                       // 0x0AE0(0x0000)
	struct DataTable                                   m_deathFieldRadiusStart;                                  // 0x0DE0(0x0000)
	struct DataTable                                   m_deathFieldRadiusEnd;                                    // 0x0EE0(0x0000)
	struct DataTable                                   m_deathFieldTimeStart;                                    // 0x0FE0(0x0000)
	struct DataTable                                   m_deathFieldTimeEnd;                                      // 0x10E0(0x0000)
	int                                                m_teamRelationRulesForPVE;                                // 0x11E0(0x0001)
	struct DataTable                                   m_civilTeamsMaskA;                                        // 0x11E8(0x0000)
	struct DataTable                                   m_civilTeamsMaskB;                                        // 0x11F8(0x0000)
	struct DataTable                                   m_rabidTeamsMask;                                         // 0x1210(0x0000)
};

//class RecvTable.DT_EntityLinkPage
class DT_EntityLinkPage
{
	int                                                pageIndex;                                                // 0x0A60(0x0004)
	struct DataTable                                   next;                                                     // 0x0A64(0x0000)
	struct DataTable                                   entity;                                                   // 0x0E64(0x0000)
};

//class RecvTable.DT_WaterLODControl
class DT_WaterLODControl
{
	struct DataTable                                   DT_WaterLODControl;                                       // 0x0000(0x0000)
	float                                              m_flCheapWaterStartDistance;                              // 0x0A60(0x0004)
	float                                              m_flCheapWaterEndDistance;                                // 0x0A64(0x0004)
};

//class RecvTable.DT_VGuiScreen
class DT_VGuiScreen
{
	struct DataTable                                   DT_VGuiScreen;                                            // 0x0000(0x0000)
	float                                              m_flWidth;                                                // 0x0A60(0x0004)
	float                                              m_flHeight;                                               // 0x0A64(0x0004)
	int                                                m_nPanelName;                                             // 0x0A70(0x0004)
	int                                                m_nAttachmentId;                                          // 0x0A8C(0x0001)
	int                                                m_nOverlayMaterial;                                       // 0x0A90(0x0004)
	int                                                m_fScreenFlags;                                           // 0x0A94(0x0004)
	int                                                m_hPlayerOwner;                                           // 0x0AF8(0x0004)
};

//class RecvTable.DT_VehicleDriverExclusive
class DT_VehicleDriverExclusive
{
	struct Array                                       m_hoverVehicleHoverOffsetPrev;                            // 0x0000(0x0010)
	struct VectorXY                                    m_localOrigin;                                            // 0x0004(0x000C)
	float                                              m_localOrigin.z;                                          // 0x000C(0x0004)
	struct Vector                                      m_hoverVehicleSmoothTilt;                                 // 0x1AB8(0x000C)
	struct Vector                                      m_hoverVehicleSmoothTiltVelocity;                         // 0x1AC4(0x000C)
	float                                              m_hoverVehicleSmoothYaw;                                  // 0x1AD0(0x0004)
	float                                              m_hoverVehicleSmoothYawVelocity;                          // 0x1AD4(0x0004)
	struct Vector                                      m_hoverVehicleLookAheadAcceleration;                      // 0x1AD8(0x000C)
	int                                                m_hoverVehicleDebugFlyMode;                               // 0x1AEC(0x0001)
	struct Vector                                      m_hoverVehiclePhysPush;                                   // 0x1B20(0x000C)
	struct DataTable                                   m_pushedFixedPointOffset;                                 // 0x1C54(0x0000)
};

//class RecvTable.DT_VehicleNonDriverExclusive
class DT_VehicleNonDriverExclusive
{
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct VectorXY                                    m_localOrigin;                                            // 0x0054(0x000C)
	float                                              m_localOrigin.z;                                          // 0x005C(0x0004)
};

//class RecvTable.DT_PlayerVehicle
class DT_PlayerVehicle
{
	struct DataTable                                   DT_PlayerVehicle;                                         // 0x0000(0x0000)
	struct DataTable                                   vehicledriverdata;                                        // 0x0000(0x0000)
	struct DataTable                                   vehiclenondriverdata;                                     // 0x0000(0x0000)
	struct Array                                       m_vehiclePlayers;                                         // 0x0000(0x0010)
	float                                              m_vecViewOffset.x;                                        // 0x0034(0x0004)
	float                                              m_vecViewOffset.y;                                        // 0x0038(0x0004)
	float                                              m_vecViewOffset.z;                                        // 0x003C(0x0004)
	int                                                m_iHealth;                                                // 0x043C(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	int                                                m_iMaxHealth;                                             // 0x0578(0x0004)
	int                                                m_vehicleDriver;                                          // 0x1984(0x0004)
	struct Time                                        m_driverActivationTime;                                   // 0x198C(0x0004)
	struct Time                                        m_driverDeactivationTime;                                 // 0x1990(0x0004)
	int                                                m_vehiclePlayerCount;                                     // 0x19A4(0x0004)
	int                                                m_vehicleActivated;                                       // 0x19A8(0x0001)
	int                                                m_blockDuckInput;                                         // 0x19A9(0x0001)
	int                                                m_vehicleFlags;                                           // 0x19AC(0x0004)
	int                                                m_vehicleType;                                            // 0x19B0(0x0004)
	float                                              m_vehicleLaunchTime;                                      // 0x19B8(0x0004)
	float                                              m_cameraVehicleMaxDist;                                   // 0x19C0(0x0004)
	float                                              m_cameraVehicleMaxVertDist;                               // 0x19C4(0x0004)
	struct Vector                                      m_vehicleVelocity;                                        // 0x19C8(0x000C)
	int                                                m_vehicleGroundEntity;                                    // 0x19D4(0x0004)
	struct Vector                                      m_vehicleGroundNormal;                                    // 0x19D8(0x000C)
	int                                                m_hoverVehicleIsOnGround;                                 // 0x1A04(0x0001)
	struct Time                                        m_hoverVehicleLastBoostTime;                              // 0x1AE4(0x0004)
	int                                                m_hoverVehicleIsParked;                                   // 0x1AED(0x0001)
	int                                                m_hoverVehicleIsMarkedAsDrivingForward;                   // 0x1AEE(0x0001)
	float                                              m_hoverVehicleStunTimeEnd;                                // 0x1AF0(0x0004)
	float                                              m_hoverVehicleThrottle;                                   // 0x1AF4(0x0004)
	float                                              m_hoverVehicleBanking;                                    // 0x1AFC(0x0004)
	float                                              m_hoverVehicleFrictionLastTime;                           // 0x1B00(0x0004)
	int                                                m_hoverVehicleFrictionSurfPropOther;                      // 0x1B04(0x0004)
	struct Vector                                      m_hoverVehicleFrictionNormal;                             // 0x1B08(0x000C)
	struct Vector                                      m_hoverVehicleFrictionPos;                                // 0x1B14(0x000C)
	struct DataTable                                   m_hoverVehicleSeats;                                      // 0x1B2C(0x0000)
	struct DataTable                                   m_abilityAttachmentEnts;                                  // 0x1B50(0x0000)
	struct DataTable                                   m_abilityAttachmentInts;                                  // 0x1B58(0x0000)
	struct Vector                                      m_overrideVehicleAngles;                                  // 0x1C38(0x000C)
	int                                                m_overrideVehicleAnglesUntilTick;                         // 0x1C44(0x0004)
	int                                                m_pushingEnt;                                             // 0x1C6C(0x0004)
	int                                                m_materialDualColorMask;                                  // 0x1CFC(0x0004)
};

//class RecvTable.DT_TriggerUpdraft
class DT_TriggerUpdraft
{
	struct DataTable                                   DT_TriggerUpdraft;                                        // 0x0000(0x0000)
};

//class RecvTable.DT_TriggerNoObjectPlacement
class DT_TriggerNoObjectPlacement
{
	struct DataTable                                   DT_TriggerNoObjectPlacement;                              // 0x0000(0x0000)
};

//class RecvTable.DT_TriggerNoZipline
class DT_TriggerNoZipline
{
	struct DataTable                                   DT_TriggerNoZipline;                                      // 0x0000(0x0000)
};

//class RecvTable.DT_TriggerNoGrapple
class DT_TriggerNoGrapple
{
	struct DataTable                                   DT_TriggerNoGrapple;                                      // 0x0000(0x0000)
};

//class RecvTable.DT_BaseVPhysicsTrigger
class DT_BaseVPhysicsTrigger
{
	struct DataTable                                   DT_BaseVPhysicsTrigger;                                   // 0x0000(0x0000)
};

//class RecvTable.DT_TriggerOutOfBounds
class DT_TriggerOutOfBounds
{
	struct DataTable                                   DT_TriggerOutOfBounds;                                    // 0x0000(0x0000)
};

//class RecvTable.DT_SoundData
class DT_SoundData
{
	int                                                m_targetEnt;                                              // 0x0000(0x0004)
	struct BitMask                                     m_soundID;                                                // 0x0008(0x0008)
	int                                                m_networkTableID;                                         // 0x0010(0x0004)
	int                                                m_soundIsStart;                                           // 0x0014(0x0001)
	float                                              m_seek;                                                   // 0x0018(0x0004)
};

//class RecvTable.DT_TESoundDispatch
class DT_TESoundDispatch
{
	struct DataTable                                   DT_TESoundDispatch;                                       // 0x0000(0x0000)
	struct DataTable                                   m_soundData;                                              // 0x0028(0x0000)
};

//class RecvTable.DT_TEPhysicsProp
class DT_TEPhysicsProp
{
	struct DataTable                                   DT_TEPhysicsProp;                                         // 0x0000(0x0000)
	struct Vector                                      m_vecOrigin;                                              // 0x0028(0x000C)
	float                                              m_angRotation.x;                                          // 0x0034(0x0004)
	float                                              m_angRotation.y;                                          // 0x0038(0x0004)
	float                                              m_angRotation.z;                                          // 0x003C(0x0004)
	struct Vector                                      m_vecVelocity;                                            // 0x0040(0x000C)
	int                                                m_nModelIndex;                                            // 0x004C(0x0004)
	int                                                m_nSkin;                                                  // 0x0050(0x0004)
	int                                                m_nFlags;                                                 // 0x0054(0x0004)
	int                                                m_nEffects;                                               // 0x0058(0x0004)
};

//class RecvTable.DT_TEParticleSystem
class DT_TEParticleSystem
{
	struct DataTable                                   DT_TEParticleSystem;                                      // 0x0000(0x0000)
	float                                              m_vecOrigin.x;                                            // 0x0028(0x0004)
	float                                              m_vecOrigin.y;                                            // 0x002C(0x0004)
	float                                              m_vecOrigin.z;                                            // 0x0030(0x0004)
};

//class RecvTable.DT_TEShatterSurface
class DT_TEShatterSurface
{
	struct DataTable                                   DT_TEShatterSurface;                                      // 0x0000(0x0000)
	struct Vector                                      m_vecOrigin;                                              // 0x0028(0x000C)
	struct Vector                                      m_vecAngles;                                              // 0x0034(0x000C)
	struct Vector                                      m_vecForce;                                               // 0x0040(0x000C)
	struct Vector                                      m_vecForcePos;                                            // 0x004C(0x000C)
	float                                              m_flWidth;                                                // 0x0058(0x0004)
	float                                              m_flHeight;                                               // 0x005C(0x0004)
	float                                              m_flShardSize;                                            // 0x0060(0x0004)
	int                                                m_nSurfaceType;                                           // 0x0064(0x0004)
};

//class RecvTable.DT_TEExplosion
class DT_TEExplosion
{
	struct DataTable                                   DT_TEExplosion;                                           // 0x0000(0x0000)
	float                                              m_fScale;                                                 // 0x0038(0x0004)
	int                                                m_nFrameRate;                                             // 0x003C(0x0004)
	int                                                m_nFlags;                                                 // 0x0040(0x0004)
	struct Vector                                      m_vecNormal;                                              // 0x0044(0x000C)
	int                                                m_chMaterialType;                                         // 0x0050(0x0001)
	int                                                m_nRadius;                                                // 0x0054(0x0004)
	int                                                m_nInnerRadius;                                           // 0x0058(0x0004)
	int                                                m_nMagnitude;                                             // 0x005C(0x0004)
	int                                                m_impactEffectTableIndex;                                 // 0x0060(0x0004)
	int                                                m_surfaceProp;                                            // 0x0064(0x0004)
	int                                                m_owner;                                                  // 0x0068(0x0004)
	int                                                m_victim;                                                 // 0x006C(0x0004)
};

//class RecvTable.DT_EffectData
class DT_EffectData
{
	float                                              m_vOrigin.x;                                              // 0x0000(0x0004)
	float                                              m_vOrigin.y;                                              // 0x0004(0x0004)
	float                                              m_vOrigin.z;                                              // 0x0008(0x0004)
	float                                              m_vStart.x;                                               // 0x000C(0x0004)
	float                                              m_vStart.y;                                               // 0x0010(0x0004)
	float                                              m_vStart.z;                                               // 0x0014(0x0004)
	struct Vector                                      m_vNormal;                                                // 0x0018(0x000C)
	struct Vector                                      m_vAngles;                                                // 0x0024(0x000C)
	int                                                m_effectFlags;                                            // 0x0030(0x0004)
	int                                                m_effectEntHandle;                                        // 0x0050(0x0004)
	int                                                m_otherEntHandle;                                         // 0x0054(0x0004)
	float                                              m_flScale;                                                // 0x0058(0x0004)
	float                                              m_flMagnitude;                                            // 0x005C(0x0004)
	float                                              m_flRadius;                                               // 0x0060(0x0004)
	int                                                m_nAttachmentId;                                          // 0x0064(0x0001)
	int                                                m_attachmentIdForViewmodel;                               // 0x0065(0x0001)
	int                                                m_nSurfaceProp;                                           // 0x0066(0x0001)
	int                                                m_nDamageType;                                            // 0x0068(0x0004)
	int                                                m_nOtherEntIndex;                                         // 0x006C(0x0004)
	int                                                m_sharedInt32_A;                                          // 0x0074(0x0004)
	int                                                m_sharedInt32_B;                                          // 0x0078(0x0004)
	int                                                m_iImpactEffectTableIndex;                                // 0x007C(0x0004)
	int                                                m_nColor;                                                 // 0x0080(0x0001)
	int                                                m_persistentWeaponEffect;                                 // 0x0094(0x0001)
	int                                                m_iEffectName;                                            // 0x0098(0x0004)
};

//class RecvTable.DT_TEEffectDispatch
class DT_TEEffectDispatch
{
	struct DataTable                                   DT_TEEffectDispatch;                                      // 0x0000(0x0000)
	struct DataTable                                   m_EffectData;                                             // 0x0028(0x0000)
};

//class RecvTable.DT_TEBreakModel
class DT_TEBreakModel
{
	struct DataTable                                   DT_TEBreakModel;                                          // 0x0000(0x0000)
	struct Vector                                      m_vecOrigin;                                              // 0x0028(0x000C)
	float                                              m_angRotation.x;                                          // 0x0034(0x0004)
	float                                              m_angRotation.y;                                          // 0x0038(0x0004)
	float                                              m_angRotation.z;                                          // 0x003C(0x0004)
	struct Vector                                      m_vecSize;                                                // 0x0040(0x000C)
	struct Vector                                      m_vecVelocity;                                            // 0x004C(0x000C)
	int                                                m_nRandomization;                                         // 0x0058(0x0004)
	int                                                m_nModelIndex;                                            // 0x005C(0x0004)
	int                                                m_nCount;                                                 // 0x0060(0x0004)
	float                                              m_fTime;                                                  // 0x0064(0x0004)
	int                                                m_nFlags;                                                 // 0x0068(0x0004)
};

//class RecvTable.DT_HardPointEntity
class DT_HardPointEntity
{
	struct Vector                                      m_localOrigin;                                            // 0x0004(0x000C)
	int                                                m_iTeamNum;                                               // 0x044C(0x0004)
	struct DataTable                                   m_minimapData;                                            // 0x0968(0x0000)
	int                                                m_state;                                                  // 0x0A64(0x0004)
	float                                              m_estimatedCaptureTime;                                   // 0x0A68(0x0004)
	float                                              m_progressRefPoint;                                       // 0x0A6C(0x0004)
	int                                                m_teamMilitiaAICount;                                     // 0x0A70(0x0004)
	int                                                m_teamIMCAICount;                                         // 0x0A74(0x0004)
	int                                                m_teamMilitiaPlayerCount;                                 // 0x0A78(0x0004)
	int                                                m_teamIMCPlayerCount;                                     // 0x0A7C(0x0004)
	int                                                m_teamMilitiaPlayerTitanCount;                            // 0x0A80(0x0004)
	int                                                m_teamIMCPlayerTitanCount;                                // 0x0A84(0x0004)
	int                                                m_hardpointID;                                            // 0x0A88(0x0004)
	int                                                m_terminal;                                               // 0x0A90(0x0004)
};

//class RecvTable.DT_HardPointFrontierEntity
class DT_HardPointFrontierEntity
{
	struct DataTable                                   DT_HardPointFrontierEntity;                               // 0x0000(0x0000)
};

//class RecvTable.DT_Team
class DT_Team
{
	int                                                player_array_element;                                     // 0x0000(0xFFFFFFFF)
	struct Array                                       "player_array";                                           // 0x0000(0x0000)
	int                                                m_score;                                                  // 0x0A60(0x0004)
	int                                                m_score2;                                                 // 0x0A64(0x0004)
	int                                                m_kills;                                                  // 0x0A68(0x0004)
	int                                                m_deaths;                                                 // 0x0A6C(0x0004)
	int                                                m_iRoundsWon;                                             // 0x0A70(0x0004)
	int                                                m_iTeamTeamNum;                                           // 0x0A74(0x0004)
	string                                             m_szTeamname;                                             // 0x0A98(0x0000)
};

//class RecvTable.DT_ImportantOnEntSound
class DT_ImportantOnEntSound
{
	struct DataTable                                   DT_ImportantOnEntSound;                                   // 0x0000(0x0000)
	int                                                m_networkTableSoundID;                                    // 0x0A60(0x0004)
	int                                                m_hAttachedToEntity;                                      // 0x0A64(0x0004)
	struct Time                                        m_beginTime;                                              // 0x0A68(0x0004)
	int                                                m_hSuppressedClient;                                      // 0x0A6C(0x0004)
	int                                                m_milesSignal;                                            // 0x0A70(0x0001)
};

//class RecvTable.DT_ShieldProp
class DT_ShieldProp
{
	struct DataTable                                   DT_ShieldProp;                                            // 0x0000(0x0000)
	int                                                m_impactEffectColorID;                                    // 0x1680(0x0001)
};

//class RecvTable.DT_FerroProp
class DT_FerroProp
{
	struct DataTable                                   DT_FerroProp;                                             // 0x0000(0x0000)
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_fEffects;                                               // 0x0040(0x0004)
	int                                                m_usableType;                                             // 0x0044(0x0004)
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	struct DataTable                                   m_highlightFunctionBits;                                  // 0x02C0(0x0000)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	int                                                m_visibilityFlags;                                        // 0x0444(0x0004)
	int                                                m_iTeamNum;                                               // 0x044C(0x0004)
	int                                                m_passThroughFlags;                                       // 0x0468(0x0004)
	int                                                m_passThroughThickness;                                   // 0x046C(0x0004)
	float                                              m_passThroughDirection;                                   // 0x0470(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
	struct DataTable                                   m_Collision;                                              // 0x04C0(0x0000)
	int                                                m_CollisionGroup;                                         // 0x0540(0x0004)
	string                                             m_iSignifierName;                                         // 0x0580(0x0000)
	string                                             m_iName;                                                  // 0x0589(0x0000)
	int                                                m_scriptNameIndex;                                        // 0x0690(0x0004)
	string                                             m_holdUsePrompt;                                          // 0x0718(0x0000)
	string                                             m_pressUsePrompt;                                         // 0x0720(0x0000)
	int                                                m_lifeState;                                              // 0x0798(0x0001)
	int                                                m_phaseShiftFlags;                                        // 0x07B8(0x0004)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
	float                                              m_fadeDist;                                               // 0x0864(0x0004)
	int                                                m_usablePriority;                                         // 0x0924(0x0004)
	float                                              m_usableDistanceOverride;                                 // 0x0928(0x0004)
	float                                              m_usableFOV;                                              // 0x092C(0x0004)
	float                                              m_usePromptSize;                                          // 0x0930(0x0004)
	struct DataTable                                   m_minimapData;                                            // 0x0968(0x0000)
	int                                                m_firstChildEntityLink;                                   // 0x0A40(0x0004)
	int                                                m_firstParentEntityLink;                                  // 0x0A44(0x0004)
	struct BitMask                                     m_realmsBitMask;                                          // 0x0A48(0x0008)
	float                                              m_flModelScale;                                           // 0x0F08(0x0004)
	int                                                m_bUseHitboxesForRenderBox;                               // 0x1641(0x0001)
	int                                                m_bAnimateInStaticShadow;                                 // 0x1642(0x0001)
};

//class RecvTable.DT_LootGrabber
class DT_LootGrabber
{
	struct DataTable                                   DT_LootGrabber;                                           // 0x0000(0x0000)
	struct DataTable                                   m_minimapData;                                            // 0x0968(0x0000)
	int                                                m_impactEffectColorID;                                    // 0x1680(0x0001)
	int                                                m_lootBeingGrabbed;                                       // 0x1688(0x0004)
	float                                              m_lootGrabDist;                                           // 0x168C(0x0004)
};

//class RecvTable.DT_DeathBoxProp
class DT_DeathBoxProp
{
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_fEffects;                                               // 0x0040(0x0004)
	int                                                m_usableType;                                             // 0x0044(0x0004)
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	struct DataTable                                   m_highlightFunctionBits;                                  // 0x02C0(0x0000)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	int                                                m_visibilityFlags;                                        // 0x0444(0x0004)
	int                                                m_iTeamNum;                                               // 0x044C(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
	struct DataTable                                   m_Collision;                                              // 0x04C0(0x0000)
	int                                                m_CollisionGroup;                                         // 0x0540(0x0004)
	string                                             m_iSignifierName;                                         // 0x0580(0x0000)
	string                                             m_iName;                                                  // 0x0589(0x0000)
	string                                             m_holdUsePrompt;                                          // 0x0718(0x0000)
	string                                             m_pressUsePrompt;                                         // 0x0720(0x0000)
	int                                                m_lifeState;                                              // 0x0798(0x0001)
	int                                                m_scriptNetData;                                          // 0x079C(0x0004)
	int                                                m_phaseShiftFlags;                                        // 0x07B8(0x0004)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
	float                                              m_fadeDist;                                               // 0x0864(0x0004)
	int                                                m_usablePriority;                                         // 0x0924(0x0004)
	float                                              m_usableDistanceOverride;                                 // 0x0928(0x0004)
	float                                              m_usableFOV;                                              // 0x092C(0x0004)
	float                                              m_usePromptSize;                                          // 0x0930(0x0004)
	int                                                m_firstChildEntityLink;                                   // 0x0A40(0x0004)
	int                                                m_firstParentEntityLink;                                  // 0x0A44(0x0004)
	struct BitMask                                     m_realmsBitMask;                                          // 0x0A48(0x0008)
	int                                                m_bUseHitboxesForRenderBox;                               // 0x1641(0x0001)
	int                                                m_bAnimateInStaticShadow;                                 // 0x1642(0x0001)
	string                                             m_customOwnerName;                                        // 0x1680(0x0000)
};

//class RecvTable.DT_PropSurvival
class DT_PropSurvival
{
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_fEffects;                                               // 0x0040(0x0004)
	int                                                m_usableType;                                             // 0x0044(0x0004)
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	int                                                m_visibilityFlags;                                        // 0x0444(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	struct DataTable                                   m_Collision;                                              // 0x04C0(0x0000)
	int                                                m_CollisionGroup;                                         // 0x0540(0x0004)
	string                                             m_iSignifierName;                                         // 0x0580(0x0000)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
	int                                                m_usablePriority;                                         // 0x0924(0x0004)
	float                                              m_usableDistanceOverride;                                 // 0x0928(0x0004)
	float                                              m_usableFOV;                                              // 0x092C(0x0004)
	float                                              m_usePromptSize;                                          // 0x0930(0x0004)
	struct BitMask                                     m_realmsBitMask;                                          // 0x0A48(0x0008)
	int                                                m_nSkin;                                                  // 0x0E50(0x0004)
	int                                                m_skinMod;                                                // 0x0E54(0x0002)
	int                                                m_nBody;                                                  // 0x0E58(0x0004)
	int                                                m_camoIndex;                                              // 0x0E5C(0x0004)
	int                                                m_ammoInClip;                                             // 0x1644(0x0004)
	int                                                m_customScriptInt;                                        // 0x1648(0x0004)
	int                                                m_survivalProperty;                                       // 0x164C(0x0004)
	int                                                m_weaponNameIndex;                                        // 0x1654(0x0002)
	int                                                m_modBitField;                                            // 0x1658(0x0004)
	float                                              m_survivalPropFadeDist;                                   // 0x1660(0x0004)
};

//class RecvTable.DT_DynamicPropLightweight
class DT_DynamicPropLightweight
{
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_fEffects;                                               // 0x0040(0x0004)
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	int                                                m_visibilityFlags;                                        // 0x0444(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	struct DataTable                                   m_Collision;                                              // 0x04C0(0x0000)
	int                                                m_CollisionGroup;                                         // 0x0540(0x0004)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
	float                                              m_fadeDist;                                               // 0x0864(0x0004)
	int                                                m_nSkin;                                                  // 0x0E50(0x0004)
	int                                                m_skinMod;                                                // 0x0E54(0x0002)
};

//class RecvTable.DT_PostProcessController
class DT_PostProcessController
{
	struct DataTable                                   DT_PostProcessController;                                 // 0x0000(0x0000)
	struct DataTable                                   m_flPostProcessParameters;                                // 0x0A60(0x0000)
	int                                                m_bMaster;                                                // 0x0A78(0x0001)
};

//class RecvTable.DT_PointCamera
class DT_PointCamera
{
	struct DataTable                                   DT_PointCamera;                                           // 0x0000(0x0000)
	float                                              m_FOV;                                                    // 0x0AC0(0x0004)
	int                                                m_bFogEnable;                                             // 0x0AE8(0x0001)
	int                                                m_bActive;                                                // 0x0AE9(0x0001)
};

//class RecvTable.DT_PhysicsProp
class DT_PhysicsProp
{
	struct DataTable                                   DT_PhysicsProp;                                           // 0x0000(0x0000)
	int                                                m_spawnflags;                                             // 0x0094(0x0004)
	int                                                m_bAwake;                                                 // 0x1648(0x0001)
	int                                                m_ignoresCollisionWithCombatCharacters;                   // 0x1649(0x0001)
	int                                                m_isRolling;                                              // 0x164A(0x0001)
	int                                                m_networkTableRollSoundId;                                // 0x164C(0x0004)
	int                                                m_iPhysicsMode;                                           // 0x1678(0x0004)
	float                                              m_fMass;                                                  // 0x167C(0x0004)
	struct Vector                                      m_collisionMins;                                          // 0x1680(0x000C)
	struct Vector                                      m_collisionMaxs;                                          // 0x168C(0x000C)
};

//class RecvTable.DT_StatueProp
class DT_StatueProp
{
	struct DataTable                                   DT_StatueProp;                                            // 0x0000(0x0000)
	int                                                m_hInitBaseAnimating;                                     // 0x16A0(0x0004)
	int                                                m_bShatter;                                               // 0x16A4(0x0001)
	int                                                m_nShatterFlags;                                          // 0x16A8(0x0004)
	struct Vector                                      m_vShatterPosition;                                       // 0x16AC(0x000C)
	struct Vector                                      m_vShatterForce;                                          // 0x16B8(0x000C)
};

//class RecvTable.DT_LootRoller
class DT_LootRoller
{
	struct DataTable                                   DT_LootRoller;                                            // 0x0000(0x0000)
	int                                                m_tier;                                                   // 0x16A0(0x0004)
	int                                                m_hasVaultKey;                                            // 0x16A4(0x0001)
};

//class RecvTable.DT_ParticleSystem
class DT_ParticleSystem
{
	struct Vector                                      m_localOrigin;                                            // 0x0004(0x000C)
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_fEffects;                                               // 0x0040(0x0004)
	int                                                m_visibilityFlags;                                        // 0x0444(0x0004)
	int                                                m_iTeamNum;                                               // 0x044C(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
	struct BitMask                                     m_realmsBitMask;                                          // 0x0A48(0x0008)
	int                                                m_iEffectIndex;                                           // 0x0A60(0x0004)
	int                                                m_nStopType;                                              // 0x0A64(0x0004)
	int                                                m_bActive;                                                // 0x0A69(0x0001)
	int                                                m_bForceRenderAlways;                                     // 0x0A6B(0x0001)
	struct Time                                        m_flStartTime;                                            // 0x0A6C(0x0004)
	int                                                m_bInSkybox;                                              // 0x0A75(0x0001)
	int                                                m_killForReplay;                                          // 0x0A76(0x0001)
	int                                                m_killIfOverLimit;                                        // 0x0A77(0x0001)
	int                                                m_enemyControlPoint;                                      // 0x0A7C(0x0001)
	int                                                m_enemyControlPointOverride;                              // 0x0A7D(0x0001)
	struct DataTable                                   m_vServerControlPoints;                                   // 0x0A80(0x0000)
	struct DataTable                                   m_hControlPointEnts;                                      // 0x0ABC(0x0000)
	struct DataTable                                   m_controlPointAttachTypes;                                // 0x0AD0(0x0000)
	int                                                m_controlPoint1AttachmentId;                              // 0x0AE5(0x0001)
	struct DataTable                                   m_vServerControlPointColorIds;                            // 0x0AE9(0x0000)
	int                                                m_parentAttachType;                                       // 0x0AF0(0x0004)
};

//class RecvTable.DT_BCCLocalPlayerExclusive
class DT_BCCLocalPlayerExclusive
{
	struct Time                                        m_flNextAttack;                                           // 0x1980(0x0004)
};

//class RecvTable.DT_BaseCombatCharacter
class DT_BaseCombatCharacter
{
	struct DataTable                                   DT_BaseCombatCharacter;                                   // 0x0000(0x0000)
	struct DataTable                                   bcc_localdata;                                            // 0x0000(0x0000)
	struct DataTable                                   m_weaponGettingSwitchedOut;                               // 0x0008(0x0000)
	struct DataTable                                   m_showActiveWeapon3p;                                     // 0x0010(0x0000)
	float                                              m_vecViewOffset.x;                                        // 0x0034(0x0004)
	float                                              m_vecViewOffset.y;                                        // 0x0038(0x0004)
	float                                              m_vecViewOffset.z;                                        // 0x003C(0x0004)
	float                                              m_cloakEndTime;                                           // 0x019C(0x0004)
	struct Time                                        m_cloakFadeInEndTime;                                     // 0x01A0(0x0004)
	float                                              m_cloakFadeOutStartTime;                                  // 0x01A4(0x0004)
	float                                              m_cloakFadeInDuration;                                    // 0x01A8(0x0004)
	float                                              m_cloakFlickerAmount;                                     // 0x01AC(0x0004)
	struct Time                                        m_cloakFlickerEndTime;                                    // 0x01B0(0x0004)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	struct Vector                                      m_deathVelocity;                                          // 0x0474(0x000C)
	struct DataTable                                   m_minimapData;                                            // 0x0968(0x0000)
	int                                                m_nameVisibilityFlags;                                    // 0x09B8(0x0004)
	struct Time                                        m_lastFiredTime;                                          // 0x1984(0x0004)
	int                                                m_lastFiredWeapon;                                        // 0x1988(0x0004)
	struct Time                                        m_raiseFromMeleeEndTime;                                  // 0x198C(0x0004)
	int                                                m_sharedEnergyCount;                                      // 0x1990(0x0004)
	int                                                m_sharedEnergyTotal;                                      // 0x1994(0x0004)
	int                                                m_sharedEnergyLockoutThreshold;                           // 0x1998(0x0004)
	struct Time                                        m_lastSharedEnergyRegenTime;                              // 0x199C(0x0004)
	struct Time                                        m_sharedEnergyRegenRate;                                  // 0x19A0(0x0004)
	float                                              m_sharedEnergyRegenDelay;                                 // 0x19A4(0x0004)
	struct Time                                        m_lastSharedEnergyTakeTime;                               // 0x19A8(0x0004)
	struct DataTable                                   m_selectedWeapons;                                        // 0x1A10(0x0000)
	struct DataTable                                   m_latestPrimaryWeapons;                                   // 0x1A14(0x0000)
	struct DataTable                                   m_latestPrimaryWeaponsIndexZeroOrOne;                     // 0x1A1C(0x0000)
	struct DataTable                                   m_latestNonOffhandWeapons;                                // 0x1A24(0x0000)
	int                                                m_lastCycleSlot;                                          // 0x1A2C(0x0001)
	int                                                m_weaponPermission;                                       // 0x1A34(0x0004)
	struct Time                                        m_weaponDelayEnableTime;                                  // 0x1A38(0x0004)
	int                                                m_weaponDisabledInScript;                                 // 0x1A3C(0x0001)
	int                                                m_weaponDisabledFlags;                                    // 0x1A52(0x0001)
	int                                                m_weaponInventorySlotLockedFlags;                         // 0x1A54(0x0002)
	int                                                m_weaponTypeDisabledFlags;                                // 0x1A58(0x0004)
	struct DataTable                                   m_weaponTypeDisabledRefCount;                             // 0x1A5C(0x0000)
	int                                                m_weaponAmmoRegenDisabled;                                // 0x1A65(0x0001)
	int                                                m_weaponAmmoRegenDisabledRefCount;                        // 0x1A68(0x0004)
	int                                                m_hudInfo_visibilityTestAlwaysPasses;                     // 0x1A6C(0x0001)
	int                                                m_contextAction;                                          // 0x1A80(0x0004)
	int                                                m_phaseShiftType;                                         // 0x1AAC(0x0004)
	struct Time                                        m_phaseShiftTimeStart;                                    // 0x1AB0(0x0004)
	struct Time                                        m_phaseShiftTimeEnd;                                      // 0x1AB4(0x0004)
	int                                                m_targetInfoPingValue;                                    // 0x1BC4(0x0004)
};

//class RecvTable.DT_WeaponInventoryActiveWeaponOnly
class DT_WeaponInventoryActiveWeaponOnly
{
	struct DataTable                                   activeWeapons;                                            // 0x0064(0x0000)
};

//class RecvTable.DT_AI_BaseNPC_StatusEffects
class DT_AI_BaseNPC_StatusEffects
{
	struct DataTable                                   m_statusEffectsTimedNPCNV;                                // 0x1C38(0x0000)
	struct DataTable                                   m_statusEffectsEndlessNPCNV;                              // 0x1C80(0x0000)
};

//class RecvTable.DT_AI_BaseNPC
class DT_AI_BaseNPC
{
	struct DataTable                                   DT_AI_BaseNPC;                                            // 0x0000(0x0000)
	struct DataTable                                   statuseffectsdata_npc;                                    // 0x0000(0x0000)
	struct Vector                                      m_localOrigin;                                            // 0x0004(0x000C)
	int                                                m_hGroundEntity;                                          // 0x0438(0x0004)
	int                                                m_iHealth;                                                // 0x043C(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	int                                                m_iMaxHealth;                                             // 0x0578(0x0004)
	int                                                m_lifeState;                                              // 0x0798(0x0001)
	struct DataTable                                   m_inventory;                                              // 0x19B0(0x0000)
	int                                                m_fireteamSlotIndex;                                      // 0x1C30(0x0004)
	int                                                m_aiSprinting;                                            // 0x1D9A(0x0001)
	int                                                m_aiNetworkFlags;                                         // 0x1DBC(0x0004)
	int                                                m_isHologram;                                             // 0x1DC0(0x0001)
	string                                             m_title;                                                  // 0x1DC1(0x0000)
	int                                                m_aiSettingsIndex;                                        // 0x1DE4(0x0004)
	int                                                m_subclass;                                               // 0x1DE8(0x0004)
};

//class RecvTable.DT_NPC_SentryTurret
class DT_NPC_SentryTurret
{
	struct DataTable                                   DT_NPC_SentryTurret;                                      // 0x0000(0x0000)
	int                                                m_turretState;                                            // 0x1DF0(0x0004)
	int                                                m_killCount;                                              // 0x1DF4(0x0004)
	int                                                m_titanKillCount;                                         // 0x1DF8(0x0004)
	int                                                m_eyeAttach;                                              // 0x1DFC(0x0001)
	int                                                m_controlPanel;                                           // 0x1E00(0x0004)
};

//class RecvTable.DT_WeaponInventory
class DT_WeaponInventory
{
	struct DataTable                                   weapons;                                                  // 0x0008(0x0000)
	struct DataTable                                   offhandWeapons;                                           // 0x0038(0x0000)
	struct DataTable                                   activeWeapons;                                            // 0x0064(0x0000)
};

//class RecvTable.DT_GrappleData
class DT_GrappleData
{
	struct Array                                       m_grapplePoints;                                          // 0x0000(0x0030)
	struct Vector                                      m_grappleVel;                                             // 0x0008(0x000C)
	int                                                m_grapplePointCount;                                      // 0x0044(0x0004)
	int                                                m_grappleAttached;                                        // 0x0048(0x0001)
	int                                                m_grapplePulling;                                         // 0x0049(0x0001)
	int                                                m_grappleSwinging;                                        // 0x004A(0x0001)
	int                                                m_grappleRetracting;                                      // 0x004B(0x0001)
	int                                                m_grappleForcedRetracting;                                // 0x004C(0x0001)
	int                                                m_grappleGracePeriodFinished;                             // 0x004D(0x0001)
	float                                              m_grappleUsedPower;                                       // 0x0050(0x0004)
	struct Time                                        m_grappleActivateTime;                                    // 0x0054(0x0004)
	struct Time                                        m_grapplePullTime;                                        // 0x0058(0x0004)
	struct Time                                        m_grappleAttachTime;                                      // 0x005C(0x0004)
	struct Time                                        m_grappleDetachTime;                                      // 0x0060(0x0004)
	int                                                m_grappleMeleeTarget;                                     // 0x0064(0x0004)
	int                                                m_grappleAutoAimTarget;                                   // 0x0068(0x0004)
	int                                                m_grappleHasGoodVelocity;                                 // 0x006C(0x0001)
	struct Time                                        m_grappleLastGoodVelocityTime;                            // 0x0070(0x0004)
	float                                              m_grappleSwingDetachLowSpeed;                             // 0x0074(0x0004)
	struct Time                                        m_grappleSwingHoldTime;                                   // 0x0078(0x0004)
};

//class RecvTable.DT_NPC_Titan
class DT_NPC_Titan
{
	struct DataTable                                   DT_NPC_Titan;                                             // 0x0000(0x0000)
	int                                                m_decalIndex;                                             // 0x0E60(0x0004)
	struct DataTable                                   m_inventory;                                              // 0x19B0(0x0000)
	struct DataTable                                   m_selectedOffhands;                                       // 0x1A26(0x0000)
	int                                                m_titanSoul;                                              // 0x1AA4(0x0004)
	int                                                m_grappleHook;                                            // 0x1DF0(0x0004)
	struct DataTable                                   m_grapple;                                                // 0x1DF8(0x0000)
	int                                                m_grappleActive;                                          // 0x1E88(0x0001)
	int                                                m_canStand;                                               // 0x1E89(0x0001)
};

//class RecvTable.DT_NPC_Dropship
class DT_NPC_Dropship
{
	struct DataTable                                   DT_NPC_Dropship;                                          // 0x0000(0x0000)
	int                                                m_titanSoul;                                              // 0x1AA4(0x0004)
	int                                                m_bJetWakeFXEnabled;                                      // 0x1E10(0x0001)
};

//class RecvTable.DT_NPC_Drone
class DT_NPC_Drone
{
	struct DataTable                                   DT_NPC_Drone;                                             // 0x0000(0x0000)
	int                                                m_bAttackTarget;                                          // 0x1DF0(0x0001)
	int                                                m_scanTarget;                                             // 0x1DF4(0x0004)
	float                                              m_beamSpread;                                             // 0x1DF8(0x0004)
};

//class RecvTable.DT_MovieDisplay
class DT_MovieDisplay
{
	struct DataTable                                   DT_MovieDisplay;                                          // 0x0000(0x0000)
	int                                                m_bEnabled;                                               // 0x0A60(0x0001)
	int                                                m_bLooping;                                               // 0x0A61(0x0001)
	string                                             m_szMovieFilename;                                        // 0x0A63(0x0000)
	string                                             m_szGroupName;                                            // 0x0AE3(0x0000)
	string                                             m_szExternalAudioFilename;                                // 0x0B63(0x0000)
	int                                                m_bStretchToFill;                                         // 0x0BA3(0x0001)
	int                                                m_bLetterbox;                                             // 0x0BA4(0x0001)
	int                                                m_bPausesWithClient;                                      // 0x0BA5(0x0001)
	int                                                m_bForcedSlave;                                           // 0x0BA6(0x0001)
	int                                                m_bUseCustomUVs;                                          // 0x0BA7(0x0001)
	float                                              m_flUMin;                                                 // 0x0BAC(0x0004)
	float                                              m_flUMax;                                                 // 0x0BB0(0x0004)
	float                                              m_flVMin;                                                 // 0x0BB4(0x0004)
	float                                              m_flVMax;                                                 // 0x0BB8(0x0004)
};

//class RecvTable.DT_TEGibEvent
class DT_TEGibEvent
{
	int                                                m_hVictim;                                                // 0x0028(0x0004)
	struct Vector                                      m_attackDir;                                              // 0x002C(0x000C)
};

//class RecvTable.DT_FuncMoveLinear
class DT_FuncMoveLinear
{
	struct DataTable                                   DT_FuncMoveLinear;                                        // 0x0000(0x0000)
	int                                                m_fFlags;                                                 // 0x0098(0x0004)
	struct Vector                                      m_vecVelocity;                                            // 0x0488(0x000C)
};

//class RecvTable.DT_FuncBrushLightweight
class DT_FuncBrushLightweight
{
	int                                                moveparent;                                               // 0x001C(0x0004)
	int                                                m_parentAttachment;                                       // 0x0020(0x0001)
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	int                                                m_visibilityFlags;                                        // 0x0444(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	struct DataTable                                   m_Collision;                                              // 0x04C0(0x0000)
	int                                                m_CollisionGroup;                                         // 0x0540(0x0004)
	int                                                m_parentAttachmentModel;                                  // 0x0858(0x0004)
};

//class RecvTable.DT_FuncBrush
class DT_FuncBrush
{
	struct DataTable                                   DT_FuncBrush;                                             // 0x0000(0x0000)
};

//class RecvTable.DT_BreakableSurface
class DT_BreakableSurface
{
	struct DataTable                                   DT_BreakableSurface;                                      // 0x0000(0x0000)
	int                                                m_nNumWide;                                               // 0x0A68(0x0004)
	int                                                m_nNumHigh;                                               // 0x0A6C(0x0004)
	float                                              m_flPanelWidth;                                           // 0x0A70(0x0004)
	float                                              m_flPanelHeight;                                          // 0x0A74(0x0004)
	struct Vector                                      m_vNormal;                                                // 0x0A78(0x000C)
	struct Vector                                      m_vUp;                                                    // 0x0A84(0x000C)
	struct Vector                                      m_vCorner;                                                // 0x0A9C(0x000C)
	int                                                m_bIsBroken;                                              // 0x0AA8(0x0001)
	int                                                m_nSurfaceType;                                           // 0x0AAC(0x0004)
	struct DataTable                                   m_RawPanelBitVec;                                         // 0x0AE8(0x0000)
};

//class RecvTable.DT_CascadeLight
class DT_CascadeLight
{
	struct DataTable                                   DT_CascadeLight;                                          // 0x0000(0x0000)
	struct Vector                                      m_shadowDirection;                                        // 0x0A60(0x000C)
	struct Vector                                      m_envLightShadowDirection;                                // 0x0A78(0x000C)
	int                                                m_bEnabled;                                               // 0x0A8C(0x0001)
	int                                                m_bEnableShadows;                                         // 0x0A8D(0x0001)
	int                                                m_LightColor;                                             // 0x0A8F(0x0004)
	string                                             m_cloudMaskName;                                          // 0x0A93(0x0000)
	struct Vector                                      m_cloudOffset;                                            // 0x0B98(0x000C)
	float                                              m_cloudScale;                                             // 0x0BA4(0x0004)
};

//class RecvTable.DT_EntityDissolve
class DT_EntityDissolve
{
	struct DataTable                                   DT_EntityDissolve;                                        // 0x0000(0x0000)
	struct Time                                        m_flStartTime;                                            // 0x0A68(0x0004)
	float                                              m_flFadeStart;                                            // 0x0A6C(0x0004)
	float                                              m_flFadeLength;                                           // 0x0A70(0x0004)
	int                                                m_nDissolveType;                                          // 0x0A74(0x0004)
	int                                                m_isLethal;                                               // 0x0A78(0x0001)
};

//class RecvTable.DT_EnvWindShared
class DT_EnvWindShared
{
	struct Time                                        m_flStartTime;                                            // 0x0008(0x0004)
	int                                                m_iWindSeed;                                              // 0x000C(0x0004)
	int                                                m_iMinWind;                                               // 0x0010(0x0004)
	int                                                m_iMaxWind;                                               // 0x0014(0x0004)
	int                                                m_iMinGust;                                               // 0x001C(0x0004)
	int                                                m_iMaxGust;                                               // 0x0020(0x0004)
	float                                              m_flMinGustDelay;                                         // 0x0024(0x0004)
	float                                              m_flMaxGustDelay;                                         // 0x0028(0x0004)
	float                                              m_flGustDuration;                                         // 0x002C(0x0004)
	int                                                m_iGustDirChange;                                         // 0x0030(0x0004)
	int                                                m_iInitialWindDir;                                        // 0x0070(0x0004)
	float                                              m_flInitialWindSpeed;                                     // 0x0074(0x0004)
};

//class RecvTable.DT_EnvWind
class DT_EnvWind
{
	struct DataTable                                   DT_EnvWind;                                               // 0x0000(0x0000)
	struct DataTable                                   m_EnvWindShared;                                          // 0x0A60(0x0000)
};

//class RecvTable.DT_DynamicLight
class DT_DynamicLight
{
	struct DataTable                                   DT_DynamicLight;                                          // 0x0000(0x0000)
	int                                                m_Flags;                                                  // 0x0A60(0x0001)
	int                                                m_LightStyle;                                             // 0x0A61(0x0001)
	float                                              m_Radius;                                                 // 0x0A64(0x0004)
	int                                                m_Exponent;                                               // 0x0A68(0x0004)
	float                                              m_InnerAngle;                                             // 0x0A6C(0x0004)
	float                                              m_OuterAngle;                                             // 0x0A70(0x0004)
	float                                              m_SpotRadius;                                             // 0x0A74(0x0004)
};

//class RecvTable.DT_ColorCorrection
class DT_ColorCorrection
{
	struct DataTable                                   DT_ColorCorrection;                                       // 0x0000(0x0000)
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0A60(0x000C)
	float                                              m_MinFalloff;                                             // 0x0A6C(0x0004)
	float                                              m_MaxFalloff;                                             // 0x0A70(0x0004)
	float                                              m_flFadeInDuration;                                       // 0x0A74(0x0004)
	float                                              m_flFadeOutDuration;                                      // 0x0A78(0x0004)
	float                                              m_flMaxWeight;                                            // 0x0A7C(0x0004)
	float                                              m_flCurWeight;                                            // 0x0A80(0x0004)
	string                                             m_netLookupFilename;                                      // 0x0A84(0x0000)
	int                                                m_bEnabled;                                               // 0x0B88(0x0001)
	int                                                m_bMaster;                                                // 0x0B89(0x0001)
	int                                                m_bClientSide;                                            // 0x0B8A(0x0001)
	int                                                m_bExclusive;                                             // 0x0B8B(0x0001)
};

//class RecvTable.DT_BaseButton
class DT_BaseButton
{
	struct DataTable                                   DT_BaseButton;                                            // 0x0000(0x0000)
	int                                                m_usable;                                                 // 0x0A90(0x0001)
};

//class RecvTable.DT_AmbientGeneric
class DT_AmbientGeneric
{
	struct DataTable                                   DT_AmbientGeneric;                                        // 0x0000(0x0000)
	float                                              m_radius;                                                 // 0x0A60(0x0004)
	int                                                m_isEnabled;                                              // 0x0A64(0x0001)
	int                                                m_networkTableSoundID;                                    // 0x0A70(0x0004)
	struct Vector                                      m_networkedSegmentEndpointWorldSpace;                     // 0x0A78(0x000C)
	int                                                m_hasPolylineSegments;                                    // 0x0A84(0x0001)
};

//class RecvTable.DT_TitanSoul_StatusEffects
class DT_TitanSoul_StatusEffects
{
	struct DataTable                                   m_statusEffectsTimedTitanSoulNV;                          // 0x0C28(0x0000)
	struct DataTable                                   m_statusEffectsEndlessTitanSoulNV;                        // 0x0D18(0x0000)
};

//class RecvTable.DT_TitanSoul
class DT_TitanSoul
{
	struct DataTable                                   statuseffectsdata_soul;                                   // 0x0000(0x0000)
	int                                                m_bossPlayer;                                             // 0x0124(0x0004)
	int                                                m_shieldHealth;                                           // 0x0170(0x0004)
	int                                                m_shieldHealthMax;                                        // 0x0174(0x0004)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	int                                                m_titan;                                                  // 0x0A60(0x0004)
	int                                                m_titanSoulScriptNetData;                                 // 0x0A68(0x0004)
	struct Time                                        m_lastRodeoHitTime;                                       // 0x0C00(0x0004)
	struct Time                                        m_nextCoreChargeAvailable;                                // 0x0C08(0x0004)
	struct Time                                        m_coreChargeExpireTime;                                   // 0x0C10(0x0004)
	struct Time                                        m_coreChargeStartTime;                                    // 0x0C18(0x0004)
	struct Time                                        m_coreUseDuration;                                        // 0x0C1C(0x0004)
	struct Time                                        m_damageComboLatestUpdateTime;                            // 0x0C20(0x0004)
	int                                                m_damageComboStartHealth;                                 // 0x0C24(0x0004)
	int                                                m_stance;                                                 // 0x0DC8(0x0004)
	int                                                m_doomed;                                                 // 0x0DCC(0x0001)
	struct BitMask                                     m_playerSettingsNum;                                      // 0x0DD0(0x0008)
	int                                                m_invalidHealthBarEnt;                                    // 0x0DD8(0x0001)
	int                                                m_bEjecting;                                              // 0x0DD9(0x0001)
	int                                                m_isValidRodeoTarget;                                     // 0x0DDA(0x0001)
};

//class RecvTable.DT_VFogVolume
class DT_VFogVolume
{
	struct DataTable                                   DT_VFogVolume;                                            // 0x0000(0x0000)
	struct Vector                                      m_absorption;                                             // 0x0A90(0x000C)
	struct Vector                                      m_scattering;                                             // 0x0A9C(0x000C)
	struct Vector                                      m_emission;                                               // 0x0AA8(0x000C)
	float                                              m_phaseG;                                                 // 0x0AB4(0x0004)
	float                                              m_edgeFade;                                               // 0x0AB8(0x0004)
	int                                                m_shapeType;                                              // 0x0ABC(0x0001)
	float                                              m_sunIntensity;                                           // 0x0AC0(0x0004)
	float                                              m_ambientIntensity;                                       // 0x0AC4(0x0004)
	struct Vector                                      m_ambientProbeOffset;                                     // 0x0AC8(0x000C)
	float                                              m_zNearFadeStart;                                         // 0x0AD4(0x0004)
	float                                              m_zNearFadeEnd;                                           // 0x0AD8(0x0004)
	float                                              m_zFarFadeStart;                                          // 0x0ADC(0x0004)
	float                                              m_zFarFadeEnd;                                            // 0x0AE0(0x0004)
	struct Vector                                      m_noiseVelocity_space;                                    // 0x0AE4(0x000C)
	float                                              m_noiseVelocity_time;                                     // 0x0AF0(0x0004)
	struct Vector                                      m_noiseScale;                                             // 0x0AF4(0x000C)
	float                                              m_noiseAmplitude;                                         // 0x0B00(0x0004)
	float                                              m_noiseCenter;                                            // 0x0B04(0x0004)
	struct Vector                                      m_size;                                                   // 0x0B08(0x000C)
	int                                                m_enabled;                                                // 0x0B14(0x0001)
};

//class RecvTable.DT_Local
class DT_Local
{
	struct Array                                       m_airMoveBlockPlanes;                                     // 0x0000(0x0018)
	int                                                m_iHideHUD;                                               // 0x0014(0x0004)
	int                                                m_superJumpsUsed;                                         // 0x0018(0x0004)
	int                                                m_jumpedOffRodeo;                                         // 0x001C(0x0001)
	struct Time                                        m_jumpPressTime;                                          // 0x0020(0x0004)
	struct Time                                        m_prevJumpPressTime;                                      // 0x0024(0x0004)
	struct Time                                        m_jetpackActivateTime;                                    // 0x0028(0x0004)
	struct Time                                        m_jetpackDeactivateTime;                                  // 0x002C(0x0004)
	float                                              m_flSuitPower;                                            // 0x0030(0x0004)
	float                                              m_flSuitJumpPower;                                        // 0x0034(0x0004)
	float                                              m_flSuitGrapplePower;                                     // 0x0038(0x0004)
	float                                              m_flFallVelocity;                                         // 0x003C(0x0004)
	float                                              m_flStepSize;                                             // 0x0040(0x0004)
	float                                              m_airSlowMoFrac;                                          // 0x0044(0x0004)
	int                                                predictableFlags;                                         // 0x0048(0x0004)
	int                                                m_bitsActiveDevices;                                      // 0x004C(0x0004)
	int                                                m_forceStance;                                            // 0x0050(0x0004)
	int                                                m_forceSlide;                                             // 0x0054(0x0001)
	int                                                m_duckToggleOn;                                           // 0x0055(0x0001)
	int                                                m_bDrawViewmodel;                                         // 0x0056(0x0001)
	int                                                m_bAllowAutoMovement;                                     // 0x0057(0x0001)
	float                                              m_accelScale;                                             // 0x0058(0x0004)
	float                                              m_powerRegenRateScale;                                    // 0x005C(0x0004)
	float                                              m_dodgePowerDelayScale;                                   // 0x0060(0x0004)
	int                                                m_hSkyCamera;                                             // 0x0078(0x0004)
	int                                                m_skybox3d.scale;                                         // 0x007C(0x0004)
	int                                                m_skybox3d.useWorldFog;                                   // 0x0080(0x0001)
	float                                              m_skybox3d.fog.botAlt;                                    // 0x0084(0x0004)
	float                                              m_skybox3d.fog.topAlt;                                    // 0x0088(0x0004)
	float                                              m_skybox3d.fog.halfDistBot;                               // 0x008C(0x0004)
	float                                              m_skybox3d.fog.halfDistTop;                               // 0x0090(0x0004)
	float                                              m_skybox3d.fog.distColorStr;                              // 0x0094(0x0004)
	float                                              m_skybox3d.fog.dirColorStr;                               // 0x0098(0x0004)
	float                                              m_skybox3d.fog.distOffset;                                // 0x009C(0x0004)
	float                                              m_skybox3d.fog.densityScale;                              // 0x00A0(0x0004)
	float                                              m_skybox3d.fog.halfAngleDeg;                              // 0x00A4(0x0004)
	float                                              m_skybox3d.fog.HDRColorScale;                             // 0x00A8(0x0004)
	int                                                m_skybox3d.fog.distColor;                                 // 0x00AC(0x0004)
	int                                                m_skybox3d.fog.dirColor;                                  // 0x00B0(0x0004)
	struct Vector                                      m_skybox3d.fog.direction;                                 // 0x00B4(0x000C)
	int                                                m_skybox3d.fog.enable;                                    // 0x00C5(0x0001)
	int                                                m_audio.soundscapeIndex;                                  // 0x012C(0x0004)
	int                                                m_audio.localBits;                                        // 0x0130(0x0004)
	int                                                m_audio.entIndex;                                         // 0x0134(0x0004)
	float                                              m_animNearZ;                                              // 0x0150(0x0004)
	int                                                lastAttacker;                                             // 0x0154(0x0004)
	int                                                attackedCount;                                            // 0x0158(0x0004)
	struct Time                                        m_airMoveBlockPlaneTime;                                  // 0x019C(0x0004)
	int                                                m_airMoveBlockPlaneCount;                                 // 0x01A0(0x0004)
	struct Time                                        m_queuedMeleePressTime;                                   // 0x01A4(0x0004)
	struct Time                                        m_queuedGrappleMeleeTime;                                 // 0x01A8(0x0004)
	int                                                m_disableMeleeUntilRelease;                               // 0x01AD(0x0001)
	struct Time                                        m_meleePressTime;                                         // 0x01B0(0x0004)
	int                                                m_meleeDisabledCounter;                                   // 0x01B4(0x0004)
	int                                                m_meleeInputIndex;                                        // 0x01B8(0x0004)
	int                                                m_trackedChildProjectileCount;                            // 0x01BC(0x0004)
	int                                                m_oneHandedWeaponUsage;                                   // 0x01C0(0x0001)
	struct Time                                        m_flCockpitEntryTime;                                     // 0x01C4(0x0004)
	struct Time                                        m_ejectStartTime;                                         // 0x01C8(0x0004)
	struct Time                                        m_disembarkStartTime;                                     // 0x01CC(0x0004)
	struct Time                                        m_hotDropImpactTime;                                      // 0x01D0(0x0004)
	struct Time                                        m_outOfBoundsDeadTime;                                    // 0x01D4(0x0004)
	int                                                m_objectiveIndex;                                         // 0x01D8(0x0004)
	int                                                m_objectiveEntity;                                        // 0x01DC(0x0004)
	struct Time                                        m_objectiveEndTime;                                       // 0x01E0(0x0004)
	int                                                m_cinematicEventFlags;                                    // 0x01E4(0x0004)
	int                                                m_forcedDialogueOnly;                                     // 0x01E8(0x0001)
	struct Time                                        m_titanBuildTime;                                         // 0x01EC(0x0004)
	struct Time                                        m_titanBubbleShieldTime;                                  // 0x01F0(0x0004)
	int                                                m_titanEmbarkEnabled;                                     // 0x01F4(0x0001)
	int                                                m_titanDisembarkEnabled;                                  // 0x01F5(0x0001)
	int                                                m_voicePackIndex;                                         // 0x01F8(0x0004)
	float                                              m_playerAnimStationaryGoalFeetYaw;                        // 0x01FC(0x0004)
	int                                                m_playerAnimJumping;                                      // 0x0200(0x0001)
	struct Time                                        m_playerAnimJumpStartTime;                                // 0x0204(0x0004)
	int                                                m_playerAnimFirstJumpFrame;                               // 0x0208(0x0001)
	int                                                m_playerAnimDodging;                                      // 0x0209(0x0001)
	int                                                m_playerAnimJumpActivity;                                 // 0x020A(0x0002)
	int                                                m_playerAnimLanding;                                      // 0x020C(0x0001)
	int                                                m_playerAnimShouldLand;                                   // 0x020D(0x0001)
	struct Time                                        m_playerAnimLandStartTime;                                // 0x0210(0x0004)
	int                                                m_playerAnimInAirWalk;                                    // 0x0214(0x0001)
	float                                              m_playerAnimPrevFrameSequenceMotionYaw;                   // 0x0218(0x0004)
	int                                                m_playerAnimMeleeParity;                                  // 0x021C(0x0004)
	struct Time                                        m_playerAnimMeleeStartTime;                               // 0x0220(0x0004)
	struct Rotation                                    m_playerLocalGravityBlendStartRotation;                   // 0x0254(0x0010)
	struct Rotation                                    m_playerLocalGravityBlendEndRotation;                     // 0x0264(0x0010)
	struct Vector                                      m_playerLocalGravityBlendEndDirection;                    // 0x0274(0x000C)
	struct Time                                        m_playerLocalGravityBlendStartTime;                       // 0x0280(0x0004)
	struct Time                                        m_playerLocalGravityBlendEndTime;                         // 0x0284(0x0004)
	float                                              m_playerLocalGravityBlendStrength;                        // 0x0288(0x0004)
	float                                              m_playerLocalGravityStrength;                             // 0x028C(0x0004)
	int                                                m_playerLocalGravityType;                                 // 0x0290(0x0004)
	struct Vector                                      m_playerLocalGravityPoint;                                // 0x0294(0x000C)
	struct Vector                                      m_playerLocalGravityLineStart;                            // 0x02A0(0x000C)
	struct Vector                                      m_playerLocalGravityLineEnd;                              // 0x02AC(0x000C)
	int                                                m_playerLocalGravityEntity;                               // 0x02B8(0x0004)
	int                                                m_playerLocalGravityLineStartEntity;                      // 0x02BC(0x0004)
	int                                                m_playerLocalGravityLineEndEntity;                        // 0x02C0(0x0004)
	struct Time                                        m_playerFloatLookStartTime;                               // 0x02C4(0x0004)
	struct Time                                        m_playerFloatLookEndTime;                                 // 0x02C8(0x0004)
	float                                              m_wallrunLatestFloorHeight;                               // 0x02CC(0x0004)
	int                                                m_wallrunFromJetpack;                                     // 0x02D0(0x0001)
	struct Vector                                      m_groundNormal;                                           // 0x02D4(0x000C)
	int                                                m_continuousUseBlocked;                                   // 0x02E0(0x0001)
	int                                                m_useEnt;                                                 // 0x02E4(0x0004)
};

//class RecvTable.DT_PlayerZipline
class DT_PlayerZipline
{
	int                                                m_ziplineReenableWeapons;                                 // 0x0008(0x0001)
	float                                              m_mountingZiplineAlpha;                                   // 0x000C(0x0004)
	struct Time                                        m_ziplineStartTime;                                       // 0x0010(0x0004)
	struct Time                                        m_ziplineEndTime;                                         // 0x0014(0x0004)
	struct Vector                                      m_mountingZiplineSourcePosition;                          // 0x0018(0x000C)
	struct Vector                                      m_mountingZiplineSourceVelocity;                          // 0x0024(0x000C)
	struct Vector                                      m_mountingZiplineTargetPosition;                          // 0x0030(0x000C)
	struct Vector                                      m_ziplineUsePosition;                                     // 0x0048(0x000C)
	float                                              m_slidingZiplineAlpha;                                    // 0x0054(0x0004)
	struct Vector                                      m_lastMoveDir2D;                                          // 0x0058(0x000C)
	int                                                m_ziplineReverse;                                         // 0x0064(0x0001)
	struct Vector                                      m_ziplinePathDirection;                                   // 0x0068(0x000C)
};

//class RecvTable.DT_CurrentData_LocalPlayer
class DT_CurrentData_LocalPlayer
{
	struct Vector                                      m_viewConeAngleMin;                                       // 0x0000(0x000C)
	struct Vector                                      m_viewConeAngleMax;                                       // 0x000C(0x000C)
	struct Vector                                      m_stepSmoothingOffset;                                    // 0x0018(0x000C)
	int                                                m_duckTransitionRemainderMsec;                            // 0x0024(0x0004)
	struct Vector                                      m_vecPunchBase_Angle;                                     // 0x0028(0x000C)
	struct Vector                                      m_vecPunchBase_AngleVel;                                  // 0x0034(0x000C)
	struct Vector                                      m_vecPunchWeapon_Angle;                                   // 0x0040(0x000C)
	struct Vector                                      m_vecPunchWeapon_AngleVel;                                // 0x004C(0x000C)
	struct DataTable                                   m_shieldChangeAmountPerSource;                            // 0x0058(0x0000)
	struct DataTable                                   m_pushedFixedPointOffset;                                 // 0x0060(0x0000)
	struct DataTable                                   m_pushedFixedPointOffsetReplayCompensated;                // 0x006C(0x0000)
	struct Rotation                                    m_localGravityRotation;                                   // 0x0084(0x0010)
};

//class RecvTable.DT_ThirdPersonView
class DT_ThirdPersonView
{
	float                                              m_thirdPersonEntViewOffset.x;                             // 0x0000(0x0004)
	float                                              m_thirdPersonEntViewOffset.y;                             // 0x0004(0x0004)
	float                                              m_thirdPersonEntViewOffset.z;                             // 0x0008(0x0004)
	int                                                m_thirdPersonEntShouldViewAnglesFollowThirdPersonEnt;     // 0x000C(0x0001)
	int                                                m_thirdPersonEntPitchIsFreelook;                          // 0x000D(0x0001)
	int                                                m_thirdPersonEntYawIsFreelook;                            // 0x000E(0x0001)
	int                                                m_thirdPersonEntUseFixedDist;                             // 0x000F(0x0001)
	int                                                m_thirdPersonEntFixedClientOnly;                          // 0x0010(0x0001)
	int                                                m_thirdPersonEntPushedInByGeo;                            // 0x0011(0x0001)
	int                                                m_thirdPersonEntDrawViewmodel;                            // 0x0012(0x0001)
	int                                                m_thirdPersonEntEnableCameraLag;                          // 0x0013(0x0001)
	int                                                m_thirdPersonEntFreezeLookControls;                       // 0x0014(0x0001)
	float                                              m_thirdPersonEntBlendInTotalDuration;                     // 0x0018(0x0004)
	float                                              m_thirdPersonEntBlendInEaseInDuration;                    // 0x001C(0x0004)
	float                                              m_thirdPersonEntBlendInEaseOutDuration;                   // 0x0020(0x0004)
	float                                              m_thirdPersonEntBlendOutDuration;                         // 0x0024(0x0004)
	float                                              m_thirdPersonEntFixedPitch;                               // 0x0028(0x0004)
	float                                              m_thirdPersonEntFixedYaw;                                 // 0x002C(0x0004)
	float                                              m_thirdPersonEntFixedDist;                                // 0x0030(0x0004)
	float                                              m_thirdPersonEntFixedHeight;                              // 0x0034(0x0004)
	float                                              m_thirdPersonEntFixedRight;                               // 0x0038(0x0004)
	float                                              m_thirdPersonEntVariableDistStart;                        // 0x003C(0x0004)
	float                                              m_thirdPersonEntVariableDistEnd;                          // 0x0040(0x0004)
	float                                              m_thirdPersonEntVariableDistStartTime;                    // 0x0044(0x0004)
	float                                              m_thirdPersonEntVariableDistEndTime;                      // 0x0048(0x0004)
	int                                                m_thirdPersonEntVariableDistLerpType;                     // 0x004C(0x0004)
	int                                                m_thirdPersonEntVariableDistLerpLogGrowthFactor;          // 0x0050(0x0004)
	float                                              m_thirdPersonEntVariableHeightStart;                      // 0x0054(0x0004)
	float                                              m_thirdPersonEntVariableHeightEnd;                        // 0x0058(0x0004)
	float                                              m_thirdPersonEntVariableHeightStartTime;                  // 0x005C(0x0004)
	float                                              m_thirdPersonEntVariableHeightEndTime;                    // 0x0060(0x0004)
	int                                                m_thirdPersonEntVariableHeightLerpType;                   // 0x0064(0x0004)
	int                                                m_thirdPersonEntVariableHeightLerpLogGrowthFactor;        // 0x0068(0x0004)
	float                                              m_thirdPersonEntVariableRightStart;                       // 0x006C(0x0004)
	float                                              m_thirdPersonEntVariableRightEnd;                         // 0x0070(0x0004)
	float                                              m_thirdPersonEntVariableRightStartTime;                   // 0x0074(0x0004)
	float                                              m_thirdPersonEntVariableRightEndTime;                     // 0x0078(0x0004)
	int                                                m_thirdPersonEntVariableRightLerpType;                    // 0x007C(0x0004)
	int                                                m_thirdPersonEntVariableRightLerpLogGrowthFactor;         // 0x0080(0x0004)
	float                                              m_thirdPersonEntMinYaw;                                   // 0x0098(0x0004)
	float                                              m_thirdPersonEntMaxYaw;                                   // 0x009C(0x0004)
	float                                              m_thirdPersonEntMinPitch;                                 // 0x00A0(0x0004)
	float                                              m_thirdPersonEntMaxPitch;                                 // 0x00A4(0x0004)
	float                                              m_thirdPersonEntSpringToCenterRate;                       // 0x00A8(0x0004)
	float                                              m_thirdPersonEntSpringToCenterDelay;                      // 0x00AC(0x0004)
	float                                              m_thirdPersonEntLookaheadLowerEntSpeed;                   // 0x00B0(0x0004)
	float                                              m_thirdPersonEntLookaheadUpperEntSpeed;                   // 0x00B4(0x0004)
	float                                              m_thirdPersonEntLookaheadMaxAngle;                        // 0x00B8(0x0004)
	float                                              m_thirdPersonEntLookaheadLerpAheadRate;                   // 0x00BC(0x0004)
	float                                              m_thirdPersonEntLookaheadLerpToCenterRate;                // 0x00C0(0x0004)
};

//class RecvTable.DT_NearbyPushers
class DT_NearbyPushers
{
	struct DataTable                                   m_nearbyPushers;                                          // 0x4484(0x0000)
};

//class RecvTable.DT_LocalPlayerExclusive
class DT_LocalPlayerExclusive
{
	struct DataTable                                   NearbyPushers;                                            // 0x0000(0x0000)
	struct VectorXY                                    m_localOrigin;                                            // 0x0004(0x000C)
	float                                              m_localOrigin.z;                                          // 0x000C(0x0004)
	struct Vector                                      m_vecAbsVelocity;                                         // 0x0140(0x000C)
	struct Vector                                      m_vecBaseVelocity;                                        // 0x042C(0x000C)
	float                                              m_vecVelocity.x;                                          // 0x0488(0x0004)
	float                                              m_vecVelocity.y;                                          // 0x048C(0x0004)
	float                                              m_vecVelocity.z;                                          // 0x0490(0x0004)
	float                                              m_flFriction;                                             // 0x04A0(0x0004)
	struct DataTable                                   m_tethers;                                                // 0x1BC8(0x0000)
	struct Cycle                                       m_lastUCmdSimulationTicks;                                // 0x1CB4(0x0004)
	float                                              m_lastUCmdSimulationRemainderTime;                        // 0x1CB8(0x0004)
	struct DataTable                                   m_Local;                                                  // 0x1DF0(0x0000)
	struct DataTable                                   m_currentFrameLocalPlayer;                                // 0x22B0(0x0000)
	struct DataTable                                   m_modInventory;                                           // 0x25F4(0x0000)
	struct DataTable                                   m_consumableInventory;                                    // 0x2674(0x0000)
	float                                              m_fStickySprintMinTime;                                   // 0x29B8(0x0004)
	struct Time                                        m_sprintStartedTime;                                      // 0x29E0(0x0004)
	float                                              m_sprintStartedFrac;                                      // 0x29E4(0x0004)
	struct Time                                        m_sprintEndedTime;                                        // 0x29E8(0x0004)
	float                                              m_sprintEndedFrac;                                        // 0x29EC(0x0004)
	struct Time                                        m_stickySprintStartTime;                                  // 0x29F0(0x0004)
	struct Vector                                      m_upDirPredicted;                                         // 0x2A60(0x000C)
	struct Vector                                      m_lastWallRunStartPos;                                    // 0x2A6C(0x000C)
	float                                              m_wallrunFrictionScale;                                   // 0x2A9C(0x0004)
	float                                              m_groundFrictionScale;                                    // 0x2AA0(0x0004)
	struct Vector                                      m_traversalBegin;                                         // 0x2AE4(0x000C)
	struct Vector                                      m_traversalMid;                                           // 0x2AF0(0x000C)
	struct Vector                                      m_traversalEnd;                                           // 0x2AFC(0x000C)
	float                                              m_traversalMidFrac;                                       // 0x2B08(0x0004)
	struct Vector                                      m_traversalForwardDir;                                    // 0x2B0C(0x000C)
	float                                              m_traversalProgress;                                      // 0x2B24(0x0004)
	struct Time                                        m_traversalStartTime;                                     // 0x2B28(0x0004)
	struct Time                                        m_traversalHandAppearTime;                                // 0x2B2C(0x0004)
	struct Time                                        m_traversalReleaseTime;                                   // 0x2B30(0x0004)
	struct Time                                        m_traversalBlendOutStartTime;                             // 0x2B34(0x0004)
	struct Vector                                      m_traversalBlendOutStartOffset;                           // 0x2B38(0x000C)
	struct Time                                        m_wallDangleJumpOffTime;                                  // 0x2B50(0x0004)
	int                                                m_wallDangleMayHangHere;                                  // 0x2B54(0x0001)
	int                                                m_wallDangleForceFallOff;                                 // 0x2B55(0x0001)
	int                                                m_wallDangleLastPushedForward;                            // 0x2B56(0x0001)
	int                                                m_wallDangleDisableWeapon;                                // 0x2B58(0x0004)
	int                                                m_gravityLiftActive;                                      // 0x2B62(0x0001)
	struct Time                                        m_gravityLiftEnterTime;                                   // 0x2B64(0x0004)
	struct Time                                        m_gravityLiftEjectTime;                                   // 0x2B68(0x0004)
	float                                              m_gravityLiftHoverTime;                                   // 0x2B6C(0x0004)
	int                                                m_blackholeActive;                                        // 0x2B88(0x0001)
	int                                                m_jetDriveWasActive;                                      // 0x2B89(0x0001)
	int                                                m_jetDriveActive;                                         // 0x2B8A(0x0001)
	struct Vector                                      m_jetDriveTargetPos;                                      // 0x2B8C(0x000C)
	int                                                m_jetDriveTargetEnt;                                      // 0x2B98(0x0004)
	struct Vector                                      m_jetDriveTargetEntOffset;                                // 0x2B9C(0x000C)
	struct Vector                                      m_jetDriveStartPos;                                       // 0x2BA8(0x000C)
	struct Time                                        m_jetDriveStartTime;                                      // 0x2BB4(0x0004)
	float                                              m_jetDriveSpeed;                                          // 0x2BB8(0x0004)
	float                                              m_jetDriveAccel;                                          // 0x2BBC(0x0004)
	struct Time                                        m_jetDriveDecelWindowTimeOutTime;                         // 0x2BC0(0x0004)
	int                                                m_jetDriveInDecelWindow;                                  // 0x2BC4(0x0001)
	float                                              m_jetDriveTimeout;                                        // 0x2BC8(0x0004)
	struct Vector                                      m_jetDriveDoubleJumpVelocity;                             // 0x2BCC(0x000C)
	int                                                m_slowMoEnabled;                                          // 0x2D04(0x0001)
	int                                                m_sliding;                                                // 0x2D05(0x0001)
	int                                                m_slideLongJumpAllowed;                                   // 0x2D06(0x0001)
	float                                              m_ziprailBankTiltVel;                                     // 0x2D14(0x0004)
	int                                                m_ziprailBankTiltPoseParameter;                           // 0x2D18(0x0002)
	int                                                m_bIsStickySprinting;                                     // 0x2D1A(0x0001)
	float                                              m_prevMoveYaw;                                            // 0x2D1C(0x0004)
	float                                              m_sprintTiltVel;                                          // 0x2D20(0x0004)
	int                                                m_sprintTiltPoseParameter;                                // 0x2D24(0x0002)
	int                                                m_sprintFracPoseParameter;                                // 0x2D26(0x0002)
	int                                                m_ziplineAllowed;                                         // 0x2E74(0x0001)
	int                                                m_lastZipline;                                            // 0x2E7C(0x0004)
	struct Time                                        m_lastZiplineDetachTime;                                  // 0x2E80(0x0004)
	struct DataTable                                   m_zipline;                                                // 0x2E90(0x0000)
	struct Vector                                      m_ziplineViewOffsetPosition;                              // 0x2F08(0x000C)
	struct Vector                                      m_ziplineViewOffsetVelocity;                              // 0x2F14(0x000C)
	int                                                m_ziplineGrenadeEntity;                                   // 0x2F20(0x0004)
	float                                              m_ziplineReattachCooldownTime;                            // 0x2F30(0x0004)
	int                                                m_ziplineCooldownIndex;                                   // 0x2F34(0x0001)
	int                                                m_highSpeedViewmodelAnims;                                // 0x2F35(0x0001)
	int                                                m_playAnimationType;                                      // 0x2F38(0x0004)
	int                                                m_detachGrappleOnPlayAnimationEnd;                        // 0x2F3C(0x0001)
	struct DataTable                                   m_playAnimationNext;                                      // 0x2F3E(0x0000)
	int                                                m_playAnimationEntityBlocker;                             // 0x2F44(0x0004)
	int                                                m_playAnimationEntityBlockerDucking;                      // 0x2F48(0x0001)
	int                                                m_boosting;                                               // 0x2F50(0x0001)
	int                                                m_activateBoost;                                          // 0x2F51(0x0001)
	int                                                m_repeatedBoost;                                          // 0x2F52(0x0001)
	float                                              m_boostMeter;                                             // 0x2F54(0x0004)
	int                                                m_jetpack;                                                // 0x2F58(0x0001)
	int                                                m_activateJetpack;                                        // 0x2F59(0x0001)
	int                                                m_jetpackAfterburner;                                     // 0x2F5A(0x0001)
	int                                                m_gliding;                                                // 0x2F5B(0x0001)
	float                                              m_glideMeter;                                             // 0x2F5C(0x0004)
	float                                              m_glideRechargeDelayAccumulator;                          // 0x2F60(0x0004)
	int                                                m_hovering;                                               // 0x2F64(0x0001)
	float                                              m_lastJumpHeight;                                         // 0x2F68(0x0004)
	struct DataTable                                   m_touchingUpdraftTriggers;                                // 0x2F6C(0x0000)
	int                                                m_touchingUpdraftTriggersCount;                           // 0x2FAC(0x0004)
	struct DataTable                                   m_touchingSlipTriggers;                                   // 0x2FB0(0x0000)
	int                                                m_touchingSlipTriggersCount;                              // 0x2FF0(0x0004)
	struct Vector                                      m_slipAirRestrictDirection;                               // 0x2FF4(0x000C)
	struct Time                                        m_slipAirRestrictTime;                                    // 0x3000(0x0004)
	struct DataTable                                   m_replayImportantSounds_networkTableSoundID;              // 0x3140(0x0000)
	struct DataTable                                   m_replayImportantSounds_beginTime;                        // 0x3150(0x0000)
	int                                                m_viewConeActive;                                         // 0x318D(0x0001)
	int                                                m_viewConeParented;                                       // 0x318E(0x0001)
	int                                                m_viewConeParity;                                         // 0x3190(0x0004)
	int                                                m_hConstraintEntity;                                      // 0x343C(0x0004)
	struct Vector                                      m_vecConstraintCenter;                                    // 0x3440(0x000C)
	float                                              m_flConstraintRadius;                                     // 0x344C(0x0004)
	float                                              m_flConstraintWidth;                                      // 0x3450(0x0004)
	float                                              m_flConstraintSpeedFactor;                                // 0x3454(0x0004)
	int                                                m_bConstraintPastRadius;                                  // 0x3458(0x0001)
	int                                                m_iObserverMode;                                          // 0x34AC(0x0004)
	int                                                m_hObserverTarget;                                        // 0x34B8(0x0004)
	struct Vector                                      m_observerModeStaticPosition;                             // 0x34C8(0x000C)
	struct Vector                                      m_observerModeStaticAngles;                               // 0x34D4(0x000C)
	float                                              m_observerModeStaticFOVOverride;                          // 0x34E0(0x0004)
	struct Time                                        m_lastKillTime;                                           // 0x354C(0x0004)
	struct Time                                        m_wallRunStartTime;                                       // 0x3574(0x0004)
	struct Time                                        m_wallRunClearTime;                                       // 0x3578(0x0004)
	int                                                m_dodging;                                                // 0x358C(0x0001)
	int                                                m_dodgingInAir;                                           // 0x35FA(0x0001)
	float                                              m_airSpeed;                                               // 0x3614(0x0004)
	float                                              m_airAcceleration;                                        // 0x3618(0x0004)
	float                                              m_timeShouldTryGivePlayerDoubleJump;                      // 0x3638(0x0004)
	int                                                m_firstPersonProxy;                                       // 0x3648(0x0004)
	int                                                m_predictedFirstPersonProxy;                              // 0x364C(0x0004)
	int                                                m_hardpointEntity;                                        // 0x365C(0x0004)
	int                                                m_petTitanMode;                                           // 0x3694(0x0004)
	int                                                m_hThirdPersonEnt;                                        // 0x369C(0x0004)
	int                                                m_thirdPersonShoulderView;                                // 0x36A0(0x0001)
	struct DataTable                                   m_thirdPerson;                                            // 0x3704(0x0000)
	int                                                m_playerLookTargetEntity;                                 // 0x3814(0x0004)
	struct Vector                                      m_playerLookTargetOffset;                                 // 0x3818(0x000C)
	float                                              m_viewConeLerpTime;                                       // 0x3868(0x0004)
	float                                              m_flLaggedMovementValue;                                  // 0x3AC4(0x0004)
	struct Time                                        m_lastMoveInputTime;                                      // 0x3AC8(0x0004)
	int                                                m_ignoreEntityForMovementUntilNotTouching;                // 0x3ACC(0x0004)
	int                                                m_lungeTargetEntity;                                      // 0x4014(0x0004)
	int                                                m_isLungingToPosition;                                    // 0x4018(0x0001)
	struct Vector                                      m_lungeTargetPosition;                                    // 0x401C(0x000C)
	struct Vector                                      m_lungeStartPositionOffset;                               // 0x4028(0x000C)
	struct Vector                                      m_lungeEndPositionOffset;                                 // 0x4034(0x000C)
	struct Time                                        m_lungeStartTime;                                         // 0x4040(0x0004)
	struct Time                                        m_lungeEndTime;                                           // 0x4044(0x0004)
	int                                                m_lungeCanFly;                                            // 0x4048(0x0001)
	int                                                m_lungeLockPitch;                                         // 0x4049(0x0001)
	float                                              m_lungeStartPitch;                                        // 0x404C(0x0004)
	float                                              m_lungeSmoothTime;                                        // 0x4050(0x0004)
	float                                              m_lungeMaxTime;                                           // 0x4054(0x0004)
	float                                              m_lungeMaxEndSpeed;                                       // 0x4058(0x0004)
	int                                                m_nearbyPusherCount;                                      // 0x45D4(0x0004)
	int                                                m_prepClimbPusher;                                        // 0x45E4(0x0004)
	struct Vector                                      m_pushAwayFromTopAcceleration;                            // 0x45E8(0x000C)
	float                                              m_minimapTargetZoomScale;                                 // 0x45F8(0x0004)
	struct Time                                        m_minimapTargetLerpTime;                                  // 0x45FC(0x0004)
	int                                                m_playerScriptNetDataExclusive;                           // 0x4604(0x0004)
	float                                              m_pingOffset;                                             // 0x4610(0x0004)
	float                                              m_skydiveForwardPoseValueVelocity;                        // 0x462C(0x0004)
	float                                              m_skydiveForwardPoseValueCurrent;                         // 0x4634(0x0004)
	float                                              m_skydiveSidePoseValueVelocity;                           // 0x4638(0x0004)
	float                                              m_skydiveSidePoseValueCurrent;                            // 0x4640(0x0004)
	float                                              m_skydiveYawVelocity;                                     // 0x4644(0x0004)
	int                                                m_skydiveIsNearLeviathan;                                 // 0x4648(0x0001)
	struct Time                                        m_skydiveStartTime;                                       // 0x4668(0x0004)
	struct Time                                        m_skydiveEndTime;                                         // 0x466C(0x0004)
	struct Time                                        m_skydiveAnticipateStartTime;                             // 0x4670(0x0004)
	struct Time                                        m_skydiveAnticipateEndTime;                               // 0x4674(0x0004)
	float                                              m_skydiveDistanceToLand;                                  // 0x4678(0x0004)
	int                                                m_skydiveFreelookEnabled;                                 // 0x468C(0x0001)
	struct Vector                                      m_skydiveFreelookLockedAngle;                             // 0x4690(0x000C)
	int                                                m_skydiveFollowing;                                       // 0x46A4(0x0001)
	struct Vector                                      m_skydiveUnfollowVelocity;                                // 0x46A8(0x000C)
	struct Vector                                      m_skydiveLeviathanHitPosition;                            // 0x46B8(0x000C)
	struct Vector                                      m_skydiveLeviathanHitNormal;                              // 0x46C4(0x000C)
	struct Vector                                      m_skydiveSlipVelocity;                                    // 0x46D0(0x000C)
	int                                                m_skydiveFromUpdraft;                                     // 0x46DC(0x0001)
	struct Vector                                      m_skywardDeployStartPos;                                  // 0x46E8(0x000C)
	float                                              m_skywardDeployEndTime;                                   // 0x4700(0x0004)
	float                                              m_skywardDeploySpeed;                                     // 0x4708(0x0004)
	float                                              m_skywardOffsetSpeed;                                     // 0x4720(0x0004)
	struct BitMask                                     m_twitchRewardBits;                                       // 0x47D0(0x0008)
	int                                                m_twitchDropsInitialized;                                 // 0x47D8(0x0001)
	struct BitMask                                     m_twitchDropsBits;                                        // 0x47E0(0x0008)
	struct DataTable                                   m_playerKnockBacks;                                       // 0x47F0(0x0000)
	int                                                m_updraftCount;                                           // 0x4870(0x0004)
	int                                                m_updraftStage;                                           // 0x4874(0x0004)
	struct Time                                        m_updraftEnterTime;                                       // 0x4878(0x0004)
	struct Time                                        m_updraftLeaveTime;                                       // 0x487C(0x0004)
	float                                              m_updraftMinShakeActivationHeight;                        // 0x4880(0x0004)
	float                                              m_updraftMaxShakeActivationHeight;                        // 0x4884(0x0004)
	float                                              m_updraftLiftActivationHeight;                            // 0x4888(0x0004)
	float                                              m_updraftLiftSpeed;                                       // 0x488C(0x0004)
	float                                              m_updraftLiftAcceleration;                                // 0x4890(0x0004)
	float                                              m_updraftLiftExitDuration;                                // 0x4894(0x0004)
	struct Time                                        m_updraftSlowTime;                                        // 0x4898(0x0004)
	int                                                m_armsModelIndex;                                         // 0x489C(0x0004)
	int                                                m_deathFieldIndex;                                        // 0x48A0(0x0004)
};

//class RecvTable.DT_PlayerTeamShared
class DT_PlayerTeamShared
{
	int                                                m_healResources_healthTarget;                             // 0x258C(0x0004)
	struct Time                                        m_lastTimeDamagedByOtherPlayer;                           // 0x3004(0x0004)
	struct Time                                        m_lastTimeDamagedByNPC;                                   // 0x3008(0x0004)
	struct Time                                        m_lastTimeDidDamageToOtherPlayer;                         // 0x300C(0x0004)
	struct Time                                        m_lastTimeDidDamageToNPC;                                 // 0x3010(0x0004)
};

//class RecvTable.DT_PlayerState
class DT_PlayerState
{
	struct BitMask                                     currentClass;                                             // 0x0010(0x0008)
	struct BitMask                                     requestedClass;                                           // 0x0018(0x0008)
	struct BitMask                                     onDeathClass;                                             // 0x0020(0x0008)
	int                                                deadflag;                                                 // 0x006C(0x0001)
};

//class RecvTable.DT_PlayerMelee_PlayerData
class DT_PlayerMelee_PlayerData
{
	int                                                meleeAttackParity;                                        // 0x0008(0x0004)
	int                                                attackActive;                                             // 0x000C(0x0001)
	int                                                attackRecoveryShouldBeQuick;                              // 0x000D(0x0001)
	int                                                isSprintAttack;                                           // 0x000E(0x0001)
	struct Time                                        attackStartTime;                                          // 0x0010(0x0004)
	int                                                attackHitEntity;                                          // 0x0014(0x0004)
	struct Time                                        attackHitEntityTime;                                      // 0x0018(0x0004)
	struct Time                                        attackLastHitNonWorldEntity;                              // 0x001C(0x0004)
	int                                                scriptedState;                                            // 0x0020(0x0004)
	int                                                pendingMeleePress;                                        // 0x0024(0x0001)
	struct Vector                                      lungeBoost;                                               // 0x0028(0x000C)
	int                                                previousMainOffhand;                                      // 0x0034(0x0004)
};

//class RecvTable.DT_ConnectionQualityIndex
class DT_ConnectionQualityIndex
{
	int                                                m_connectionQualityIndex;                                 // 0x2592(0x0001)
};

//class RecvTable.DT_PortalNonLocalPlayerExclusive
class DT_PortalNonLocalPlayerExclusive
{
	int                                                m_pusher;                                                 // 0x0024(0x0004)
	struct Vector                                      m_originRelativeToPusher;                                 // 0x0028(0x000C)
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct VectorXY                                    m_localOrigin;                                            // 0x0054(0x000C)
	float                                              m_localOrigin.z;                                          // 0x005C(0x0004)
	int                                                m_sliding;                                                // 0x2D05(0x0001)
};

//class RecvTable.DT_Player_ViewOffsetEntityData
class DT_Player_ViewOffsetEntityData
{
	int                                                viewOffsetEntityHandle;                                   // 0x0008(0x0004)
	float                                              lerpInDuration;                                           // 0x000C(0x0004)
	float                                              lerpOutDuration;                                          // 0x0010(0x0004)
	int                                                stabilizePlayerEyeAngles;                                 // 0x0014(0x0001)
};

//class RecvTable.DT_Player_AnimViewEntityData
class DT_Player_AnimViewEntityData
{
	int                                                animViewEntityHandle;                                     // 0x0000(0x0004)
	float                                              animViewEntityAngleLerpInDuration;                        // 0x0004(0x0004)
	float                                              animViewEntityOriginLerpInDuration;                       // 0x0008(0x0004)
	float                                              animViewEntityLerpOutDuration;                            // 0x000C(0x0004)
	int                                                animViewEntityStabilizePlayerEyeAngles;                   // 0x0010(0x0001)
	int                                                animViewEntityThirdPersonCameraParity;                    // 0x0014(0x0004)
	struct DataTable                                   animViewEntityThirdPersonCameraAttachment;                // 0x0018(0x0000)
	int                                                animViewEntityNumThirdPersonCameraAttachments;            // 0x0020(0x0004)
	int                                                animViewEntityThirdPersonCameraVisibilityChecks;          // 0x0024(0x0001)
	int                                                animViewEntityDrawPlayer;                                 // 0x0025(0x0001)
	float                                              fovTarget;                                                // 0x0028(0x0004)
	float                                              fovSmoothTime;                                            // 0x002C(0x0004)
	int                                                animViewEntityParity;                                     // 0x0038(0x0004)
};

//class RecvTable.DT_CurrentData_Player
class DT_CurrentData_Player
{
	float                                              m_flHullHeight;                                           // 0x0014(0x0004)
	float                                              m_angEyeAngles.x;                                         // 0x0018(0x0004)
	float                                              m_angEyeAngles.y;                                         // 0x001C(0x0004)
	float                                              m_traversalAnimProgress;                                  // 0x0024(0x0004)
	float                                              m_sprintTiltFrac;                                         // 0x0028(0x0004)
	float                                              m_ziprailBankTiltFrac;                                    // 0x002C(0x0004)
	struct DataTable                                   m_ammoPoolCount;                                          // 0x0030(0x0000)
};

//class RecvTable.DT_PlayerShared
class DT_PlayerShared
{
	int                                                m_nPlayerCond;                                            // 0x0008(0x0004)
};

//class RecvTable.DT_Player
class DT_Player
{
	struct DataTable                                   DT_Player;                                                // 0x0000(0x0000)
	struct DataTable                                   localdata;                                                // 0x0000(0x0000)
	struct DataTable                                   teamshareddata;                                           // 0x0000(0x0000)
	struct DataTable                                   portalnonlocaldata;                                       // 0x0000(0x0000)
	struct Array                                       m_passives;                                               // 0x0000(0x0010)
	struct DataTable                                   connectionQualityIndex;                                   // 0x0000(0x0000)
	struct Vector                                      m_vecAbsOrigin;                                           // 0x0004(0x000C)
	int                                                isLocalOriginLocal;                                       // 0x0010(0x0001)
	int                                                m_fFlags;                                                 // 0x0098(0x0004)
	int                                                m_hGroundEntity;                                          // 0x0438(0x0004)
	int                                                m_iHealth;                                                // 0x043C(0x0004)
	float                                              m_flMaxspeed;                                             // 0x0440(0x0004)
	struct Time                                        m_jumpPadDebounceExpireTime;                              // 0x0464(0x0004)
	int                                                m_iMaxHealth;                                             // 0x0578(0x0004)
	int                                                m_lifeState;                                              // 0x0798(0x0001)
	int                                                m_decalIndex;                                             // 0x0E60(0x0004)
	struct DataTable                                   m_overlayEventParity;                                     // 0x1751(0x0000)
	struct DataTable                                   m_inventory;                                              // 0x19B0(0x0000)
	struct DataTable                                   m_selectedOffhands;                                       // 0x1A26(0x0000)
	struct DataTable                                   m_selectedOffhandsPendingHybridAction;                    // 0x1A29(0x0000)
	int                                                m_titanSoul;                                              // 0x1AA4(0x0004)
	int                                                m_bZooming;                                               // 0x1C31(0x0001)
	struct Time                                        m_zoomToggleOnStartTime;                                  // 0x1C34(0x0004)
	float                                              m_zoomBaseFrac;                                           // 0x1C38(0x0004)
	struct Time                                        m_zoomBaseTime;                                           // 0x1C3C(0x0004)
	struct Time                                        m_zoomFullStartTime;                                      // 0x1C40(0x0004)
	struct DataTable                                   m_currentFramePlayer;                                     // 0x20D8(0x0000)
	struct DataTable                                   pl;                                                       // 0x2500(0x0000)
	int                                                m_ammoPoolCapacity;                                       // 0x2584(0x0004)
	int                                                m_hasBadReputation;                                       // 0x2588(0x0001)
	int                                                m_hardware;                                               // 0x2590(0x0001)
	int                                                m_unspoofedHardware;                                      // 0x2591(0x0001)
	struct BitMask                                     m_platformUserId;                                         // 0x2598(0x0008)
	struct BitMask                                     m_unSpoofedPlatformUserId;                                // 0x25A0(0x0008)
	struct BitMask                                     m_EadpUserId;                                             // 0x25A8(0x0008)
	int                                                m_crossPlayChat;                                          // 0x25B0(0x0001)
	int                                                m_crossPlayChatFriends;                                   // 0x25B1(0x0001)
	int                                                m_laserSightColorCustomized;                              // 0x25B2(0x0001)
	struct Vector                                      m_laserSightColor;                                        // 0x25B4(0x000C)
	struct BitMask                                     m_classModsActive;                                        // 0x25C0(0x0008)
	int                                                m_bleedoutState;                                          // 0x2718(0x0004)
	float                                              m_bleedoutStartTime;                                      // 0x271C(0x0004)
	struct DataTable                                   m_statusEffectsTimedPlayerNV;                             // 0x2720(0x0000)
	struct DataTable                                   m_statusEffectsEndlessPlayerNV;                           // 0x2810(0x0000)
	struct Time                                        m_damageComboLatestUpdateTime;                            // 0x28C4(0x0004)
	int                                                m_damageComboStartHealth;                                 // 0x28C8(0x0004)
	struct DataTable                                   m_gestureSequences;                                       // 0x28CC(0x0000)
	struct DataTable                                   m_gestureStartTimes;                                      // 0x28DC(0x0000)
	struct DataTable                                   m_gestureBlendInDuration;                                 // 0x28FC(0x0000)
	struct DataTable                                   m_gestureBlendOutDuration;                                // 0x291C(0x0000)
	struct DataTable                                   m_gestureFadeOutStartTime;                                // 0x293C(0x0000)
	struct DataTable                                   m_gestureFadeOutDuration;                                 // 0x295C(0x0000)
	int                                                m_gestureAutoKillBitfield;                                // 0x297C(0x0004)
	int                                                m_autoSprintForced;                                       // 0x29C0(0x0004)
	int                                                m_fIsSprinting;                                           // 0x29C4(0x0001)
	int                                                m_playerSettingForStickySprintForward;                    // 0x29D2(0x0001)
	struct Time                                        m_lastSprintPressTime;                                    // 0x29D4(0x0004)
	struct Time                                        m_stickySprintForwardEnableTime;                          // 0x29D8(0x0004)
	struct Time                                        m_stickySprintForwardDisableTime;                         // 0x29DC(0x0004)
	struct Time                                        m_damageImpulseNoDecelEndTime;                            // 0x29F4(0x0004)
	struct DataTable                                   m_playerVehicles;                                         // 0x2A00(0x0000)
	int                                                m_playerVehicleCount;                                     // 0x2A08(0x0004)
	int                                                m_playerVehicleDriven;                                    // 0x2A0C(0x0004)
	struct Time                                        m_playerVehicleUseTime;                                   // 0x2A10(0x0004)
	int                                                m_duckState;                                              // 0x2A14(0x0004)
	int                                                m_leanState;                                              // 0x2A18(0x0004)
	int                                                m_canStand;                                               // 0x2A1D(0x0001)
	struct Vector                                      m_StandHullMin;                                           // 0x2A20(0x000C)
	struct Vector                                      m_StandHullMax;                                           // 0x2A2C(0x000C)
	struct Vector                                      m_DuckHullMin;                                            // 0x2A38(0x000C)
	struct Vector                                      m_DuckHullMax;                                            // 0x2A44(0x000C)
	int                                                m_entitySyncingWithMe;                                    // 0x2A50(0x0004)
	struct Vector                                      m_upDir;                                                  // 0x2A54(0x000C)
	int                                                m_traversalState;                                         // 0x2ADC(0x0004)
	int                                                m_traversalType;                                          // 0x2AE0(0x0004)
	struct Vector                                      m_traversalForwardDir;                                    // 0x2B0C(0x000C)
	struct Vector                                      m_traversalRefPos;                                        // 0x2B18(0x000C)
	float                                              m_traversalYawDelta;                                      // 0x2B44(0x0004)
	int                                                m_traversalYawPoseParameter;                              // 0x2B48(0x0002)
	int                                                m_wallClimbSetUp;                                         // 0x2B60(0x0001)
	int                                                m_wallHanging;                                            // 0x2B61(0x0001)
	struct DataTable                                   m_grapple;                                                // 0x2C60(0x0000)
	int                                                m_grappleActive;                                          // 0x2CF0(0x0001)
	int                                                m_turret;                                                 // 0x2D34(0x0004)
	struct DataTable                                   m_hViewModels;                                            // 0x2D38(0x0000)
	struct DataTable                                   m_viewOffsetEntity;                                       // 0x2D48(0x0000)
	struct DataTable                                   m_animViewEntity;                                         // 0x2D88(0x0000)
	int                                                m_activeZipline;                                          // 0x2E78(0x0004)
	int                                                m_ziplineValid3pWeaponLayerAnim;                          // 0x2E84(0x0001)
	int                                                m_ziplineState;                                           // 0x2E88(0x0004)
	int                                                m_ziplineGrenadeBeginStationEntity;                       // 0x2F24(0x0004)
	int                                                m_ziplineGrenadeBeginStationAttachmentId;                 // 0x2F28(0x0001)
	int                                                m_isPerformingBoostAction;                                // 0x2F65(0x0001)
	int                                                m_lastJumpPadTouched;                                     // 0x3060(0x0004)
	int                                                m_launchCount;                                            // 0x3068(0x0004)
	struct DataTable                                   m_melee;                                                  // 0x3198(0x0000)
	int                                                m_useCredit;                                              // 0x31D0(0x0001)
	int                                                m_playerFlags;                                            // 0x31E0(0x0004)
	int                                                m_hasMic;                                                 // 0x31E8(0x0001)
	int                                                m_inPartyChat;                                            // 0x31E9(0x0001)
	int                                                m_communicationsAutoBlocked;                              // 0x31EA(0x0001)
	float                                              m_playerMoveSpeedScale;                                   // 0x31EC(0x0004)
	int                                                m_bShouldDrawPlayerWhileUsingViewEntity;                  // 0x3438(0x0001)
	int                                                m_iSpawnParity;                                           // 0x34A4(0x0001)
	struct Time                                        m_flDeathTime;                                            // 0x3550(0x0004)
	struct Time                                        m_lastDodgeTime;                                          // 0x3590(0x0004)
	struct Time                                        m_timeJetpackHeightActivateCheckPassed;                   // 0x35B8(0x0004)
	int                                                m_grappleHook;                                            // 0x3650(0x0004)
	int                                                m_petTitan;                                               // 0x3654(0x0004)
	int                                                m_xp;                                                     // 0x367C(0x0004)
	float                                              m_skill_mu;                                               // 0x3684(0x0004)
	int                                                m_bHasMatchAdminRole;                                     // 0x3688(0x0001)
	int                                                m_ubEFNoInterpParity;                                     // 0x3FC8(0x0001)
	int                                                m_hColorCorrectionCtrl;                                   // 0x3FCC(0x0004)
	string                                             m_title;                                                  // 0x3FF0(0x0000)
	struct DataTable                                   m_Shared;                                                 // 0x4320(0x0000)
	int                                                m_pilotClassIndex;                                        // 0x4374(0x0004)
	int                                                m_pilotClassActivityModifier;                             // 0x4378(0x0002)
	int                                                m_playerScriptNetDataGlobal;                              // 0x4600(0x0004)
	int                                                m_helmetType;                                             // 0x4608(0x0004)
	int                                                m_armorType;                                              // 0x460C(0x0004)
	int                                                m_controllerModeActive;                                   // 0x4614(0x0001)
	float                                              m_skydiveForwardPoseValueTarget;                          // 0x4630(0x0004)
	float                                              m_skydiveSidePoseValueTarget;                             // 0x463C(0x0004)
	int                                                m_skydiveState;                                           // 0x4664(0x0004)
	float                                              m_skydiveDiveAngle;                                       // 0x467C(0x0004)
	int                                                m_skydiveIsDiving;                                        // 0x4680(0x0001)
	float                                              m_skydiveSpeed;                                           // 0x4684(0x0004)
	float                                              m_skydiveStrafeAngle;                                     // 0x4688(0x0004)
	float                                              m_skydivePlayerPitch;                                     // 0x469C(0x0004)
	float                                              m_skydivePlayerYaw;                                       // 0x46A0(0x0004)
	int                                                m_skydiveFromSkywardLaunch;                               // 0x46DD(0x0001)
	int                                                m_skywardLaunchState;                                     // 0x46E0(0x0004)
	float                                              m_skywardLaunchSlowStartTime;                             // 0x46F4(0x0004)
	float                                              m_skywardLaunchSlowEndTime;                               // 0x46F8(0x0004)
	float                                              m_skywardLaunchFastEndTime;                               // 0x46FC(0x0004)
	float                                              m_skywardLaunchEndTime;                                   // 0x4704(0x0004)
	float                                              m_skywardLaunchSlowSpeed;                                 // 0x470C(0x0004)
	float                                              m_skywardLaunchFastSpeed;                                 // 0x4710(0x0004)
	struct Vector                                      m_skywardOffset;                                          // 0x4714(0x000C)
	int                                                m_skywardLaunchInterrupted;                               // 0x4724(0x0001)
	int                                                m_skywardLaunchFollowing;                                 // 0x4725(0x0001)
	struct Vector                                      m_armoredLeapAirPos;                                      // 0x472C(0x000C)
	struct Vector                                      m_armoredLeapEndPos;                                      // 0x4738(0x000C)
	int                                                m_armoredLeapType;                                        // 0x4744(0x0004)
	int                                                m_armoredLeapPhase;                                       // 0x4748(0x0004)
	struct Time                                        m_armoredLeapStartTime;                                   // 0x474C(0x0004)
	int                                                m_dragReviveState;                                        // 0x47B8(0x0004)
	float                                              m_dragReviveOutroStartTime;                               // 0x47BC(0x0004)
	int                                                m_reviveTarget;                                           // 0x47C0(0x0004)
	int                                                m_duelTarget;                                             // 0x47C8(0x0004)
};

//class RecvTable.DT_BoneFollower
class DT_BoneFollower
{
	int                                                m_cellX;                                                  // 0x0048(0x0004)
	int                                                m_cellY;                                                  // 0x004C(0x0004)
	int                                                m_cellZ;                                                  // 0x0050(0x0004)
	struct Vector                                      m_localOrigin;                                            // 0x0054(0x000C)
	int                                                m_nModelIndex;                                            // 0x0060(0x0004)
	int                                                m_networkedFlags;                                         // 0x03F0(0x0004)
	struct Vector                                      m_localAngles;                                            // 0x0494(0x000C)
	int                                                m_hOwnerEntity;                                           // 0x04A8(0x0004)
	struct DataTable                                   m_Collision;                                              // 0x04C0(0x0000)
	int                                                m_CollisionGroup;                                         // 0x0540(0x0004)
	int                                                m_modelIndex;                                             // 0x0A60(0x0004)
	int                                                m_boneIndex;                                              // 0x0A64(0x0002)
};

